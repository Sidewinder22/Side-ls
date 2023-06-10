/*
 * ProgramOptions.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_PROGRAMOPTIONS_HPP_
#define SRC_PROGRAMOPTIONS_HPP_

#include <boost/program_options.hpp>


namespace po = boost::program_options;

class ProgramOptions {
public:
	ProgramOptions();

	void parseArgs(int argc, char* argv[]);

private:
	po::options_description description_;
	po::variables_map variablesMap_;
};

#endif /* SRC_PROGRAMOPTIONS_HPP_ */
