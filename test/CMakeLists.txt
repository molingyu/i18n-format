# i18n-format unit test app

add_executable(test
        main.c
        test_word2number.c
)

set_target_properties(test PROPERTIES
        C_STANDARD 17
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS NO
)

# Special access to i18n-format internals for testing
target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/src)

if (MSVC)
    target_compile_options(test PRIVATE /experimental:c11atomics)
elseif (APPLE)
    # determinism settings
    target_compile_options(test PRIVATE -ffp-contract=off)
endif ()

target_link_libraries(test PRIVATE i18n_format)

source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" PREFIX "" FILES ${i18n_format_TESTS})