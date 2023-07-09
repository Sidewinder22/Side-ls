//
// Created by sidewin on 02.07.23.
//

#include <algorithm>
#include <array>
#include <gtest/gtest.h>
#include "ProgramOptions.hpp"

TEST(ProgramOptionsTest, ConstructurNoThrow)
{
    EXPECT_NO_THROW(ProgramOptions());
}

TEST(ProgramOptionsTest, GivenNoArgs_ReturnNormalOption)
{
    ProgramOptions programOptions;
    auto result = programOptions.parseArgs({}, {});

    auto found = std::ranges::find_if(result,
        [](auto x){ return x.first == Option::normal; });

    EXPECT_TRUE(found != result.end());
    EXPECT_EQ(result.size(), 1);
}

TEST(ProgramOptionsTest, GivenLongListingArg_ReturnLongListingOption)
{
    char* params[2] = {(char*) "side-ls-app", (char*)"-l"};
    size_t size = sizeof (params) / sizeof(params[0]);

    ProgramOptions programOptions;
    auto result = programOptions.parseArgs(size, params);

    EXPECT_EQ(result.size(), 1);
    EXPECT_TRUE(result.find(Option::list) != result.end());
}

TEST(ProgramOptionsTest, Test3)
{
    char* params[3] = {(char*) "side-ls-app", (char*) "-l", (char*) ".."};

    size_t size = sizeof (params) / sizeof(params[0]);

    ProgramOptions programOptions;
    auto result = programOptions.parseArgs(size, params);

    EXPECT_EQ(result.size(), 2);
    EXPECT_TRUE(result.find(Option::list) != result.end());

    auto it = result.find(Option::path);
    EXPECT_TRUE(it != result.end());
    EXPECT_STREQ(it->second.c_str(), params[2]);

}
