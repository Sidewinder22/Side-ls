#include <algorithm>
#include "CleanHandler.hpp"

std::vector<std::string> CleanHandler::execute(std::vector<std::string> output)
{
    std::vector<std::string> result;
    result.reserve(output.size());

    std::ranges::transform(output, std::back_inserter(result),
        [](const std::string& entry){
                return entry.substr(entry.find_last_of('/') + 1); });

    return result;
}
