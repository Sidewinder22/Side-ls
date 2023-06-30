//
// Created by sidewin on 30.06.23.
//

#ifndef SIDE_LS_NORMALLISTINGHANDLER_HPP
#define SIDE_LS_NORMALLISTINGHANDLER_HPP

#include "Handler.hpp"

class NormalListingHandler : public Handler
{
public:
    ~NormalListingHandler() override = default;

    std::vector<std::string> execute(std::vector<std::string> output) override;
};

#endif //SIDE_LS_NORMALLISTINGHANDLER_HPP
