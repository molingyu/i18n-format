# i18n-format unit test app

add_executable(test
        unit_test.h
        unit_test.c
        main.c
        test_word2number.c
)

set_target_properties(test PROPERTIES
        C_STANDARD 17
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS NO
)

if (UNIX)
    target_link_libraries(test rt)
endif ()

# Special access to i18n-format internals for testing
target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(test PRIVATE i18n_format)

source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" PREFIX "" FILES ${i18n_format_TESTS})