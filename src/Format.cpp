/*
 * Format.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <algorithm>
#include <iostream>
#include "Format.hpp"


Format::Format(const std::vector<Options>& options)
    : options_(std::move(options))
{  }

auto Format::formatOutput(const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    auto result = cleanupOutput(output);

    for (auto&& option: options_)
    {
        result = applyOption(option, result);
    }

    return result;
}

auto Format::applyOption(Options option, const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    std::vector<std::string> result;

    switch (option)
    {
        case Options::l:
            std::cout << "Format l" << std::endl;
            result = longListing(output);
        break;

        default:
            std::cerr << "Wrong options!" << std::endl;
    }

    return result;
}

auto Format::cleanupOutput(const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    std::vector<std::string> result;

    std::ranges::transform(output, std::back_inserter(result),
        [](std::string entry){ return entry.substr(2); });

    return result;
}

auto Format::longListing(const std::vector<std::string>& output)
    -> std::vector<std::string>
{
     std::vector<std::string> result;

    std::ranges::transform(output, std::back_inserter(result),
        [](std::string entry){ return entry + "\n"; });

    return result;
}
