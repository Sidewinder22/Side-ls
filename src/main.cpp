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
	programOptions.parseArgs(argc, argv);

    Filesystem filesystem;
    filesystem.printCurrentDir();

	return 0;
}
