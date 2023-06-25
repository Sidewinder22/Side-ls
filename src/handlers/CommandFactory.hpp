#ifndef COMMANDFACTORY_HPP
#define COMMANDFACTORY_HPP

#include <memory>
#include "Command.hpp"

class CommandFactory
{
public:
    CommandFactory();

    std::unique_ptr<Command>
        createLongListingCommand(std::vector<std::string> output);
    std::unique_ptr<Command>
        createCleanCommand(std::vector<std::string> output);
};

#endif // COMMANDFACTORY_HPP
