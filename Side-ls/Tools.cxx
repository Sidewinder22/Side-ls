module;

#include <iostream>
#include <filesystem>

export module tools;

export class Tools {
public:
    void printCurrentDir();

private:
    static constexpr auto currentPath_ = (".");
};

void Tools::printCurrentDir()
{
    const std::filesystem::path path(currentPath_);
    for (auto && entry : std::filesystem::directory_iterator{path})
    {
        std::cout << "Path: " << entry << std::endl;
    }
}
