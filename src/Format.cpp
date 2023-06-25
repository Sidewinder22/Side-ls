/*
 * Format.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include "Format.hpp"


Format::Format(std::vector<Options> options)
    : options_(std::move(options))
    , handlerFactory_(std::make_unique<HandlerFactory>())
{  }

auto Format::formatOutput(const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    auto clean = handlerFactory_->createCleanHandler(output);
    auto result = clean->execute();

    for (auto&& option: options_)
    {
        result = applyOption(option, result);
    }

    return result;
}

auto Format::applyOption(Options option, const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    std::unique_ptr<Handler> handler;

    switch (option)
    {
        case Options::l:
            handler = handlerFactory_->createLongListingHandler(output);
        break;

        default:
            std::cerr << "Wrong options!" << std::endl;
    }

    return handler->execute();
}
