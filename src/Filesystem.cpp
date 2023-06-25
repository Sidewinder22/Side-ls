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

Filesystem::Filesystem(std::unordered_map<Option, std::string> options)
    : options_(std::move(options))
{  }

void Filesystem::printDir()
{
    auto output = getDirContent(extractPathFromOptions());

    Format format(options_);
    auto results = format.formatOutput(output);

    for (auto && result : results)
    {
        std::cout << result << " ";
    }

    std::cout << std::endl;
}

std::string Filesystem::extractPathFromOptions()
{
    std::string path;

    if (auto search = options_.find(Option::path); search != options_.end())
    {
        path = search->second;
    }

    return path;
}

std::vector<std::string> Filesystem::getDirContent(const std::string &path)
{
    std::vector<std::string> output;

    for (auto && entry : std::filesystem::directory_iterator{
         path.empty() ? currentPath_ : path})
    {
        output.push_back(entry.path().c_str());
    }

    return output;
}
