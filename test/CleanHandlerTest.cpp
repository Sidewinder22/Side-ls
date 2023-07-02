//
// Created by sidewin on 02.07.23.
//

#include <gtest/gtest.h>
#include "handlers/CleanHandler.hpp"

TEST(CleanHandlerTest, ConstructurNoThrow)
{
    EXPECT_NO_THROW(CleanHandler({}));
}

TEST(CleanHandlerTest, GivenOutputWhenOptionEnabledThenRemoveAdditionalChars)
{
    std::vector<std::string> output = {
        "../Listing",
        "../test.txt",
        "dir"
    };

    std::vector<std::string> expectedResult = {
        "Listing",
        "test.txt",
        "dir"
    };

    std::unique_ptr<Handler> handler =
        std::make_unique<CleanHandler>();

    auto result = handler->execute(output);

    EXPECT_EQ(result.size(), output.size());
    EXPECT_EQ(result, expectedResult);
}
