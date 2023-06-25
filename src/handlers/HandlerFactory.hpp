#ifndef HANDLERFACTORY_HPP
#define HANDLERFACTORY_HPP

#include <memory>
#include <vector>
#include "Handler.hpp"
#include "Option.hpp"

class HandlerFactory
{
public:
    HandlerFactory();

    std::vector<std::unique_ptr<Handler>> getApplicableHandlers(
        std::vector<Option> options);

private:
    std::unique_ptr<Handler> getAppropiateHandlerForOption(Option option);
};

#endif // HANDLERFACTORY_HPP
