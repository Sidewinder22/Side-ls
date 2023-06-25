/*
 * ProgramOptions.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include "ProgramOptions.hpp"

ProgramOptions::ProgramOptions()
    : optionsDescription_("Allowed options")
{
    optionsDescription_.add_options()
		("help,h", "produce help message")
		("list,l", "use a long listing format")
        ("path,p", po::value<std::string>(), "path to list")
	;

    positionalOptionsDescription_.add("path", -1);
}

std::unordered_map<Option, std::string> ProgramOptions::parseArgs(
    int argc, char* argv[])
{
    po::store(po::command_line_parser(argc, argv)
        .options(optionsDescription_)
        .positional(positionalOptionsDescription_)
        .run(),
         variablesMap_);

    po::notify(variablesMap_);
    std::unordered_map<Option, std::string> options;

    if (variablesMap_.count("path"))
    {
        options.insert({Option::path, variablesMap_["path"].as<std::string>()});
    }

	if (variablesMap_.count("help"))
	{
        std::cout << optionsDescription_ << "\n";
	}

	if (variablesMap_.count("list"))
	{
        options.insert({Option::list, ""});
	}

    return options;
}
