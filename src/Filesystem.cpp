/*
 * Filesystem.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include <filesystem>
#include "Format.hpp"
#include "Filesystem.hpp"

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
