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

void ProgramOptions::parseArgs(int argc, char* argv[])
{
	po::store(po::parse_command_line(argc, argv, description_), variablesMap_);
	po::notify(variablesMap_);

	if (variablesMap_.count("help"))
	{
		std::cout << description_ << "\n";
	}

	if (variablesMap_.count("list"))
	{
		std::cout << "list option" << std::endl;
	}
}
