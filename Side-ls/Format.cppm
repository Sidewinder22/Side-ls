module;

#include <string>
#include <vector>

export module Format;

export class Format
{
public:
    std::vector<std::string> cleanupOutput(std::vector<std::string>& output);
};
