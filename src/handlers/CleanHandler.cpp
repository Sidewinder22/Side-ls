#include <algorithm>
#include "CleanHandler.hpp"

std::vector<std::string> CleanHandler::execute(std::vector<std::string> output)
{
    std::vector<std::string> result;

    std::ranges::transform(output, std::back_inserter(result),
        [](std::string entry){ return entry.substr(2); });

    return result;
}
