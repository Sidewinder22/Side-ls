//
// Created by sidewin on 30.06.23.
//

#include <algorithm>
#include <ranges>
#include "NormalListingHandler.hpp"

std::vector<std::string> NormalListingHandler::execute(std::vector<std::string> output)
{
    std::vector<std::string> result;
    result.reserve(output.size());

    auto addSpace = [&result](const std::string& s) { return result.push_back(s + " ");};
    long int count = static_cast<long int>(output.size()) - 1;

    std::ranges::for_each(std::ranges::take_view{output, count}, addSpace);

    result.push_back(output.back() + "\n");
    return result;
}
