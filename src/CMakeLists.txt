add_custom_target(codeGen
        COMMAND python ../gen/gen.py
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(SOURCE_FILES
        core.h
)

set(API_FILES
        ../include/i18n-format/base.h
)

file(GLOB GEN_SOURCES_H "./gen/*.h")
file(GLOB GEN_SOURCES "./gen/*.c")

file(GLOB LOCALE_H "./locale/**/*.h")
file(GLOB LOCALE "./locale/**/*.c")

# Hide internal functions
# https://gcc.gnu.org/wiki/Visibility
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

add_library(i18n_format SHARED ${SOURCE_FILES} ${GEN_SOURCES_H} ${GEN_SOURCES} ${LOCALE_H} ${LOCALE} ${API_FILES})

add_dependencies(i18n_format codeGen)

# Generate i18n_format_export.h to handles shared library builds
# turned this off to make i18n_format easier to use without cmake
# include(GenerateExportHeader)
# generate_export_header(i18n_format)

target_include_directories(i18n_format
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

set(CMAKE_DEBUG_POSTFIX "d")

# i18n_format uses C17
set_target_properties(i18n_format PROPERTIES
        LINKER_LANGUAGE C
        C_STANDARD 17
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS YES
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION_MAJOR}
        DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX}
)

if (MSVC)
    message(STATUS "i18n_format on MSVC")
    if (BUILD_SHARED_LIBS)
        # this is needed by DLL users to import i18n_format symbols
        target_compile_definitions(i18n_format INTERFACE i18n_format_DLL)
    endif ()

    # Enable asserts in release with debug info
    target_compile_definitions(i18n_format PUBLIC "$<$<CONFIG:RELWITHDEBINFO>:B2_ENABLE_ASSERT>")

    # Atomics are still considered experimental in Visual Studio 17.8
    target_compile_options(i18n_format PRIVATE /experimental:c11atomics)


elseif (MINGW)
    message(STATUS "i18n_format on MinGW")
elseif (APPLE)
    message(STATUS "i18n_format on Apple")
    target_compile_options(i18n_format PRIVATE -ffp-contract=off)
elseif (EMSCRIPTEN)
    message(STATUS "i18n_format on Emscripten")
elseif (UNIX)
    message(STATUS "i18n_format using Unix")
    if ("${CMAKE_HOST_SYSTEM_PROCESSOR}" STREQUAL "aarch64")
        # raspberry pi
        # -mfpu=neon
        # target_compile_options(i18n_format PRIVATE)
    else ()
        # x64
    endif ()
endif ()

source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" PREFIX "src" FILES ${i18n_format_SOURCE_FILES})
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/../include" PREFIX "include" FILES ${i18n_format_API_FILES})

add_library(i18n_format::i18n_format ALIAS i18n_format)

install(
        TARGETS i18n_format
        EXPORT i18n_formatConfig
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

install(
        EXPORT i18n_formatConfig
        NAMESPACE i18n_format::
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/i18n_format"
)

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/i18n_formatConfigVersion.cmake"
        COMPATIBILITY SameMajorVersion
)

install(
        FILES "${CMAKE_CURRENT_BINARY_DIR}/i18n_formatConfigVersion.cmake"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/i18n_format"
)