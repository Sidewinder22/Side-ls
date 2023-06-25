#ifndef HANDLER_H
#define HANDLER_H

#include <string>
#include <vector>

class Handler
{
public:
    virtual ~Handler() = default;
    virtual std::vector<std::string> execute() = 0;
};

#endif // HANDLER_H
