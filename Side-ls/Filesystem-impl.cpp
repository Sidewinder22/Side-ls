module;

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

module Filesystem;
import Format;

void Filesystem::printCurrentDir()
{
    auto output = getDirContent();

    Format format;
    auto results = format.cleanupOutput(output);

    for (auto && result : results)
    {
        std::cout << result << " ";
    }

    std::cout << std::endl;
}

    
std::vector<std::string> Filesystem::getDirContent()
{
    std::vector<std::string> output;
        
    for (auto && entry : std::filesystem::directory_iterator{currentPath_})
    {
        output.push_back(entry.path().c_str());
    }

    return output;
}
