/*
 * ProgramOptions.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include "ProgramOptions.hpp"

ProgramOptions::ProgramOptions()
	: description_("Allowed options")
{
	description_.add_options()
		("help,h", "produce help message")
		("list,l", "use a long listing format")
	;
}

std::vector<Option> ProgramOptions::parseArgs(int argc, char* argv[])
{
	po::store(po::parse_command_line(argc, argv, description_), variablesMap_);
	po::notify(variablesMap_);
    std::vector<Option> options;

	if (variablesMap_.count("help"))
	{
		std::cout << description_ << "\n";
	}

	if (variablesMap_.count("list"))
	{
        options.push_back(Option::l);
	}

    return options;
}
