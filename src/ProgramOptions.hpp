/*
 * ProgramOptions.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_PROGRAMOPTIONS_HPP_
#define SRC_PROGRAMOPTIONS_HPP_

#include <unordered_map>
#include <boost/program_options.hpp>
#include "Option.hpp"

namespace po = boost::program_options;

class ProgramOptions
{
public:
	ProgramOptions();

    std::unordered_map<Option, std::string> parseArgs(int argc, char* argv[]);

private:
    po::options_description optionsDescription_;
    po::positional_options_description positionalOptionsDescription_;
	po::variables_map variablesMap_;
};

#endif /* SRC_PROGRAMOPTIONS_HPP_ */
