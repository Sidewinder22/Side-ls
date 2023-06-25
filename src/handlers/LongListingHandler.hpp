#ifndef LONGLISTINGHANDLER_HPP
#define LONGLISTINGHANDLER_HPP

#include "Handler.hpp"

class LongListingHandler : public Handler
{
public:
    explicit LongListingHandler(std::vector<std::string> output);
    ~LongListingHandler() override = default;

    std::vector<std::string> execute() override;

private:
    std::vector<std::string> output_;
};

#endif // LONGLISTINGHANDLER_HPP
