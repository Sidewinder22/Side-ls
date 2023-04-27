module;

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

module Filesystem;
import Format;

void Filesystem::printCurrentDir()
{
    std::vector<std::string> output;
    
    for (auto && entry : std::filesystem::directory_iterator{currentPath_})
    {
        output.push_back(entry.path().c_str());
    }

    Format format;
    auto results = format.cleanupOutput(output);

    for (auto && result : results)
    {
        std::cout << result << " ";
    }

    std::cout << std::endl;
}
