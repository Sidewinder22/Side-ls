//
// Created by sidewin on 02.07.23.
//

#include <gtest/gtest.h>
#include "handlers/LongListingHandler.hpp"

TEST(LongListingHandlerTest, ConstructurNoThrow)
{
    EXPECT_NO_THROW(LongListingHandler({}));
}

TEST(LongListingHandlerTest, GivenOutputWhenEnabledThenAddNewLines)
{
    std::vector<std::string> output = {
        "../Listing",
        "../test.txt",
        "dir"
    };

    std::vector<std::string> expectedResult = {
        "../Listing\n",
        "../test.txt\n",
        "dir\n"
    };

    std::unique_ptr<Handler> handler =
        std::make_unique<LongListingHandler>();

    auto result = handler->execute(output);

    EXPECT_EQ(result.size(), output.size());
    EXPECT_EQ(result, expectedResult);
}
