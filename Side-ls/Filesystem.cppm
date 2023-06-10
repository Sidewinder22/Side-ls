module;

#include <string>
#include <vector>

export module Filesystem;

export class Filesystem
{
public:
    void printCurrentDir();
    std::vector<std::string> getDirContent();

private:
    static constexpr auto currentPath_ = ".";
};
