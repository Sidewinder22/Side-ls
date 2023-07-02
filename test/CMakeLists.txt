add_executable(
        ${PROJECT_NAME}-ut
        CleanHandlerTest.cpp
        HandlerFactoryTest.cpp
        LongListingHandlerTest.cpp
        NormalListingHandlerTest.cpp
)

target_link_libraries(
        ${PROJECT_NAME}-ut
        ${PROJECT_NAME}
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)
