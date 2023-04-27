module;

#include <algorithm>
#include <iostream>
#include <vector>

module Format;

std::vector<std::string> Format::cleanupOutput(std::vector<std::string>& output)
{
    // Remove `./` from the begin of the entries
    std::transform(output.begin(), output.end(),
        output.begin(),
        [](std::string entry){ return entry.substr(2); });

    return std::move(output);
}
