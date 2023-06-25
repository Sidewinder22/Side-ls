#include "LongListingHandler.hpp"

#include <algorithm>
#include <iostream>

LongListingHandler::LongListingHandler(std::vector<std::string> output)
    : output_(output)
{ }

std::vector<std::string> LongListingHandler::execute()
{
    std::vector<std::string> result;

    std::ranges::transform(output_, std::back_inserter(result),
        [](std::string entry){ return entry + "\n"; });

    return result;
}
