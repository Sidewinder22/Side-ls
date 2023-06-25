/*
 * Filesystem.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_FILESYSTEM_HPP_
#define SRC_FILESYSTEM_HPP_

#include <string>
#include <vector>
#include "Option.hpp"

class Filesystem {
public:
    Filesystem(std::vector<Option> options);

	void printCurrentDir();
    std::vector<std::string> getDirContent();

private:
	static constexpr auto currentPath_ = ".";
    std::vector<Option> options_;
};

#endif /* SRC_FILESYSTEM_HPP_ */
