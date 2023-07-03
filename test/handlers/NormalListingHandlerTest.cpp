//
// Created by sidewin on 02.07.23.
//

#include <gtest/gtest.h>
#include "handlers/NormalListingHandler.hpp"

TEST(NormalListingHandlerTest, ConstructurNoThrow)
{
    EXPECT_NO_THROW(NormalListingHandler({}));
}

TEST(NormalListingHandlerTest, GivenOutputWhenOptionEnabledThenAddSpacesAndNewLineAtTheEnd)
{
    std::vector<std::string> output = {
        "../Listing",
        "../test.txt",
        "dir"
    };

    std::vector<std::string> expectedResult = {
        "../Listing ",
        "../test.txt ",
        "dir\n"
    };

    std::unique_ptr<Handler> handler =
        std::make_unique<NormalListingHandler>();

    auto result = handler->execute(output);

    EXPECT_EQ(result.size(), output.size());
    EXPECT_EQ(result, expectedResult);
}
