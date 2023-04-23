#include <iostream>
#include <filesystem>
#include "Filesystem.hpp"

void Filesystem::getCurrentDirContent()
{
    const std::filesystem::path path(currentPath_);

//    std::vector<std::string> output;
    for (auto && entry : std::filesystem::directory_iterator{path})
    {
        std::cout << "Path: " << entry << std::endl;
//        output.push_back(entry.path().c_str());
    }
}
