module;

#include <algorithm>
#include <iostream>
#include <vector>

module Format;

std::vector<std::string> Format::cleanupOutput(std::vector<std::string> output)
{
    for (auto && entry: output)
    {
        std::cout << entry << "  " << std::endl;
    }

    return std::move(output);
}
