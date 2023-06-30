#ifndef HANDLERFACTORY_HPP
#define HANDLERFACTORY_HPP

#include <memory>
#include <unordered_map>
#include <vector>
#include "Handler.hpp"
#include "Option.hpp"

class HandlerFactory
{
public:
    HandlerFactory() = default;

    std::vector<std::unique_ptr<Handler>> getApplicableHandlers(
        std::unordered_map<Option, std::string> options);

private:
    std::unique_ptr<Handler> getAppropiateHandlerForOption(
        std::pair<Option, std::string> option);
};

#endif // HANDLERFACTORY_HPP
