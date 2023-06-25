/*
 * Format.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include "Format.hpp"

Format::Format(std::unordered_map<Option, std::string> options)
    : options_(std::move(options))
    , handlerFactory_(std::make_unique<HandlerFactory>())
{  }

std::vector<std::string> Format::formatOutput(std::vector<std::string> output)
{
    std::vector<std::string> result = std::move(output);
    auto handlers = handlerFactory_->getApplicableHandlers(options_);

    for (auto && handler : handlers)
    {
        result = handler->execute(result);
    }

    return result;
}
