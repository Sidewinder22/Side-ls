//
// Created by sidewin on 02.07.23.
//

#include <gtest/gtest.h>
#include "Format.hpp"

TEST(Test, FormatConstructorNoThrowTest)
{
    EXPECT_NO_THROW(Format({}));
}