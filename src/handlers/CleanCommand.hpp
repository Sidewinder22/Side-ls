#ifndef CLEANCOMMAND_HPP
#define CLEANCOMMAND_HPP

#include "Command.hpp"

class CleanCommand : public Command
{
public:
    explicit CleanCommand(std::vector<std::string> output);

    std::vector<std::string> execute() override;

private:
    std::vector<std::string> output_;
};

#endif // CLEANCOMMAND_HPP
