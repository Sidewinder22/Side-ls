#include "CommandFactory.hpp"
#include "LongListingCommand.hpp"

CommandFactory::CommandFactory()
{  }

std::unique_ptr<Command> CommandFactory::createLongListingCommand(
    std::vector<std::string> output)
{
    return std::make_unique<LongListingCommand>(std::move(output));
}
