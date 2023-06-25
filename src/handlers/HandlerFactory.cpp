#include <iostream>
#include "HandlerFactory.hpp"
#include "LongListingHandler.hpp"
#include "CleanHandler.hpp"

HandlerFactory::HandlerFactory()
{  }

std::vector<std::unique_ptr<Handler>> HandlerFactory::getApplicableHandlers(
    std::vector<Option> options)
{
    std::vector<std::unique_ptr<Handler>> handlers;

    // Always cleanup the input
    handlers.emplace_back(std::make_unique<CleanHandler>());

    for (auto && option: options)
    {
        handlers.push_back(getAppropiateHandlerForOption(option));
    }

    return handlers;
}

std::unique_ptr<Handler> HandlerFactory::getAppropiateHandlerForOption(
    Option option)
{
    std::unique_ptr<Handler> handler;

    switch (option)
    {
        case Option::l:
            handler = std::make_unique<LongListingHandler>();
        break;

        default:
            std::cerr << "Wrong options!" << std::endl;
            handler = nullptr;
    }

    return handler;
}
