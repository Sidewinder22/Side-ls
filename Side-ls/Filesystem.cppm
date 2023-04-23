module;

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

export module Filesystem;

import Format;

export class Filesystem
{
public:
    void printCurrentDir();

private:
    static constexpr auto currentPath_ = ".";
};

void Filesystem::printCurrentDir()
{
    std::cout << "printCurrentDir()" << std::endl;
    const std::filesystem::path path(currentPath_);
    
    std::vector<std::string> output;
    for (auto && entry : std::filesystem::directory_iterator{path})
    {
    //    std::cout << "Path: " << entry << std::endl;
        output.push_back(entry.path().c_str());
    }

    std::cout << "Before cleanup" << std::endl;
    Format format;
    format.cleanupOutput(output);
}
