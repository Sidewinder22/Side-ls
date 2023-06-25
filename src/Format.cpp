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
    , factory_(std::make_unique<CommandFactory>())
{  }

auto Format::formatOutput(const std::vector<std::string>& output)
    -> std::vector<std::string>
{
    auto clean = factory_->createCleanCommand(output);
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
    std::unique_ptr<Command> commandHandler;

    switch (option)
    {
        case Options::l:
//            std::cout << "Format l" << std::endl;
            commandHandler = factory_->createLongListingCommand(output);
        break;

        default:
            std::cerr << "Wrong options!" << std::endl;
    }

    return commandHandler->execute();
}
