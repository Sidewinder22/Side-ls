#ifndef HANDLERFACTORY_HPP
#define HANDLERFACTORY_HPP

#include <memory>
#include "Handler.hpp"

class HandlerFactory
{
public:
    HandlerFactory();

    std::unique_ptr<Handler>
        createLongListingHandler(std::vector<std::string> output);
    std::unique_ptr<Handler>
        createCleanHandler(std::vector<std::string> output);
};

#endif // HANDLERFACTORY_HPP
