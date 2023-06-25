#ifndef CLEANHANDLER_HPP
#define CLEANHANDLER_HPP

#include "Handler.hpp"

class CleanHandler : public Handler
{
public:
    ~CleanHandler() override = default;

    std::vector<std::string> execute(std::vector<std::string> output) override;
};

#endif // CLEANHANDLER_HPP
