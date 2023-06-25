#ifndef LONGLISTINGCOMMAND_HPP
#define LONGLISTINGCOMMAND_HPP

#include "Command.hpp"

class LongListingCommand : public Command
{
public:
    LongListingCommand(std::vector<std::string> output);
    ~LongListingCommand() override = default;

    std::vector<std::string> execute() override;

private:
    std::vector<std::string> output_;
};

#endif // LONGLISTINGCOMMAND_HPP
