#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

class Command
{
public:
    virtual ~Command() = default;
    virtual std::vector<std::string> execute() = 0;
};

#endif // COMMAND_H
