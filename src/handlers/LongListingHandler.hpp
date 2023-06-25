#ifndef LONGLISTINGHANDLER_HPP
#define LONGLISTINGHANDLER_HPP

#include "Handler.hpp"

class LongListingHandler : public Handler
{
public:
    ~LongListingHandler() override = default;

    std::vector<std::string> execute(std::vector<std::string> output) override;
};

#endif // LONGLISTINGHANDLER_HPP
