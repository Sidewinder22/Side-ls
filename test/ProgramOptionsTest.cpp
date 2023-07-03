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

TEST(ProgramOptionsTest, GivenNoArgsThenReturnNormalOption)
{
    ProgramOptions programOptions;
    auto result = programOptions.parseArgs({}, {});

    auto found = std::ranges::find_if(result,
        [](auto x){ return x.first == Option::normal; });

    EXPECT_TRUE(found);
    EXPECT_EQ(result.size(), 1);
}

TEST(ProgramOptionsTest, Test2)
{
    char** params = {(char**)"-l"};

    size_t size = sizeof (params) / sizeof(params[0]);


    ProgramOptions programOptions;
    auto result = programOptions.parseArgs(size, params);

    EXPECT_EQ(result.size(), 2);

}

TEST(ProgramOptionsTest, Test3)
{
    char** params = {(char**)"-l", (char**)".."};

    size_t size = sizeof (params) / sizeof(params[0]);


    ProgramOptions programOptions;
    auto result = programOptions.parseArgs(size, params);

    EXPECT_EQ(result.size(), 2);

}
