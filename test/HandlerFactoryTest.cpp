//
// Created by sidewin on 02.07.23.
//

#include <gtest/gtest.h>
#include "handlers/HandlerFactory.hpp"

TEST(HandlerFactoryTest, GivenEmptyOptionsThenCreateOnlyDefaultCleanHandler)
{
    HandlerFactory factory;
    auto handlers = factory.getApplicableHandlers({});

    EXPECT_EQ(handlers.size(), 1);
}

TEST(HandlerFactoryTest, GivenListOptionsThenCreateTwoHandlers)
{
    std::unordered_map<Option, std::string> options = {
        {Option::list, ""},
    };

    HandlerFactory factory;
    auto handlers = factory.getApplicableHandlers(options);

    EXPECT_EQ(handlers.size(), 2);
}

TEST(HandlerFactoryTest, GivenNormalOptionsThenCreateTwoHandlers)
{
    std::unordered_map<Option, std::string> options = {
        {Option::normal, ""},
    };

    HandlerFactory factory;
    auto handlers = factory.getApplicableHandlers(options);

    EXPECT_EQ(handlers.size(), 2);
}

TEST(HandlerFactoryTest, GivenNormalAndListOptionsThenCreateTwoHandlers)
{
    std::unordered_map<Option, std::string> options = {
        {Option::list, ""},
        {Option::normal, ""},
    };

    HandlerFactory factory;
    auto handlers = factory.getApplicableHandlers(options);

    EXPECT_EQ(handlers.size(), 3);
}

TEST(HandlerFactoryTest, GivenNormalListPahtOptionsThenCreateOnlyTwoHandlers)
{
    std::unordered_map<Option, std::string> options = {
        {Option::list, ""},
        {Option::normal, ""},
        {Option::path, ""},
    };

    HandlerFactory factory;
    auto handlers = factory.getApplicableHandlers(options);

    EXPECT_EQ(handlers.size(), 3);
}
