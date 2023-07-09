add_executable(
        ${PROJECT_NAME}-ut
        handlers/CleanHandlerTest.cpp
        handlers/HandlerFactoryTest.cpp
        handlers/LongListingHandlerTest.cpp
        handlers/NormalListingHandlerTest.cpp
        ProgramOptionsTest.cpp
)

target_link_libraries(
        ${PROJECT_NAME}-ut
        ${PROJECT_NAME}
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)
