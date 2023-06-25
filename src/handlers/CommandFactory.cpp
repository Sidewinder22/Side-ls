#include "CommandFactory.hpp"
#include "LongListingCommand.hpp"
#include "CleanCommand.hpp"

CommandFactory::CommandFactory()
{  }

std::unique_ptr<Command> CommandFactory::createLongListingCommand(
    std::vector<std::string> output)
{
    return std::make_unique<LongListingCommand>(std::move(output));
}

std::unique_ptr<Command> CommandFactory::createCleanCommand(
    std::vector<std::string> output)
{
    return std::make_unique<CleanCommand>(std::move(output));

}
