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

Filesystem::Filesystem(std::vector<Option> options)
    : options_(std::move(options))
{  }

void Filesystem::printCurrentDir()
{
    auto output = getDirContent();

    Format format(options_);
    auto results = format.formatOutput(output);

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
