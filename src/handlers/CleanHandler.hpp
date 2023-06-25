#ifndef CLEANHANDLER_HPP
#define CLEANHANDLER_HPP

#include "Handler.hpp"

class CleanHandler : public Handler
{
public:
    explicit CleanHandler(std::vector<std::string> output);

    std::vector<std::string> execute() override;

private:
    std::vector<std::string> output_;
};

#endif // CLEANHANDLER_HPP
