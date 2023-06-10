module;

#include <string>
#include <vector>

export module Format;

export class Format
{
public:
    std::vector<std::string> cleanupOutput(const std::vector<std::string>& output);
};
