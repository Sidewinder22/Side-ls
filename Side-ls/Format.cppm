module;

#include <iostream>
#include <string>
#include <vector>

export module Format;

export class Format
{
public:
    std::vector<std::string> cleanupOutput(std::vector<std::string> output);
};


std::vector<std::string> Format::cleanupOutput(std::vector<std::string> output)
{
    std::cout << "CleanupOutput(): " << std::endl;

    for (auto && entry: output)
    {
        std::cout << "entry: " << entry << std::endl;
    }

    return std::move(output);
}
