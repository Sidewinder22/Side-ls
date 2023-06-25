#include <algorithm>
#include "CleanHandler.hpp"

CleanHandler::CleanHandler(std::vector<std::string> output)
    : output_(output)
{ }

std::vector<std::string> CleanHandler::execute()
{
    std::vector<std::string> result;

    std::ranges::transform(output_, std::back_inserter(result),
        [](std::string entry){ return entry.substr(2); });

    return result;
}
