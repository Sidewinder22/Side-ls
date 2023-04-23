#ifndef FILESYSTEM_HPP
#define FILESYSTEM_HPP

class Filesystem
{
public:
    void getCurrentDirContent();

private:
    static constexpr auto currentPath_ = (".");
};

#endif // FILESYSTEM_HPP
