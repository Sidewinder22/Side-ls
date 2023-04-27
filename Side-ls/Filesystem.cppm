export module Filesystem;

export class Filesystem
{
public:
    void printCurrentDir();

private:
    static constexpr auto currentPath_ = ".";
};
