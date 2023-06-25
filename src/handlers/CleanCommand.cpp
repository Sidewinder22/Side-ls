#include <algorithm>
#include "CleanCommand.hpp"

CleanCommand::CleanCommand(std::vector<std::string> output)
    : output_(output)
{ }

std::vector<std::string> CleanCommand::execute()
{
    std::vector<std::string> result;

    std::ranges::transform(output_, std::back_inserter(result),
        [](std::string entry){ return entry.substr(2); });

    return result;
}
