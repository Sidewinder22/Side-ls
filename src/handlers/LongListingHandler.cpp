#include <algorithm>
#include "LongListingHandler.hpp"

std::vector<std::string> LongListingHandler::execute(std::vector<std::string> output)
{
    std::vector<std::string> result;
    result.reserve(output.size());

    std::ranges::transform(output, std::back_inserter(result),
        [](std::string entry){ return entry + "\n"; });

    return result;
}
