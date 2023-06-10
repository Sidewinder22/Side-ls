/*
 * Format.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <algorithm>
#include <iostream>
#include "Format.hpp"

std::vector<std::string> Format::cleanupOutput(const std::vector<std::string>& output)
{
    std::vector<std::string> result;

    std::ranges::transform(output, std::back_inserter(result),
        [](std::string entry){ return entry.substr(2); });

    return result;
}
