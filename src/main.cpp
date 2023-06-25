/*
 * main.cpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#include <iostream>
#include "Filesystem.hpp"
#include "ProgramOptions.hpp"

int main(int argc, char* argv[])
{
	ProgramOptions programOptions;
    auto args =	programOptions.parseArgs(argc, argv);

    Filesystem filesystem(args);
    filesystem.printCurrentDir();

	return 0;
}
