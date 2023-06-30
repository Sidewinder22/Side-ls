#include <iostream>
#include "HandlerFactory.hpp"
#include "LongListingHandler.hpp"
#include "NormalListingHandler.hpp"
#include "CleanHandler.hpp"

std::vector<std::unique_ptr<Handler>> HandlerFactory::getApplicableHandlers(
    std::unordered_map<Option, std::string> options)
{
    std::vector<std::unique_ptr<Handler>> handlers;

    // Always cleanup the input
    handlers.emplace_back(std::make_unique<CleanHandler>());

    for (auto && option : options)
    {
        auto handler = getAppropiateHandlerForOption(option);
        if (handler)
        {
            handlers.emplace_back(std::move(handler));
        }
    }

    return handlers;
}

std::unique_ptr<Handler> HandlerFactory::getAppropiateHandlerForOption(
    std::pair<Option, std::string> option)
{
    std::unique_ptr<Handler> handler = nullptr;

    switch (option.first)
    {
        case Option::list:
            handler = std::make_unique<LongListingHandler>();
        break;

        case Option::path:
        break;

        case Option::normal:
            handler = std::make_unique<NormalListingHandler>();
        break;

        default:
            std::cerr << "Wrong options!" << std::endl;
    }

    return handler;
}
