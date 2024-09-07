cmake_minimum_required(VERSION 3.16.3)
project(i18n_format
        VERSION 0.1.0
        DESCRIPTION "Multi-language conversion and text generation of formatted data."
        HOMEPAGE_URL "https://github.com/molingyu/i18n-format"
        LANGUAGES C CXX
)

message(STATUS "CMake C compiler: ${CMAKE_C_COMPILER_ID}")
message(STATUS "CMake C++ compiler: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "CMake system name: ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMake host system processor: ${CMAKE_HOST_SYSTEM_PROCESSOR}")

if (PROJECT_IS_TOP_LEVEL)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
endif ()

# C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_subdirectory(src)

if (PROJECT_IS_TOP_LEVEL)
    option(i18n_format_DOCS "Build the i18n_format documentation" OFF)
    option(i18n_format_UNIT_TESTS "Build the i18n_format unit tests" ON)
    option(BUILD_SHARED_LIBS "Build the i18n_format shared lib" OFF)

    include(GNUInstallDirs)

    install(
            DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/i18n_format"
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    )

    # Tests need static linkage because they test internal i18n_format functions
    if (NOT BUILD_SHARED_LIBS AND i18n_format_UNIT_TESTS)
        message(STATUS "Adding i18n_format unit tests")
        add_subdirectory(test)
        set_target_properties(test PROPERTIES XCODE_GENERATE_SCHEME TRUE)
    else ()
        message(STATUS "Skipping i18n_format unit tests")
    endif ()

    if (i18n_format_DOCS)
        add_subdirectory(docs)
    endif ()
endif ()
