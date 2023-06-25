/*
 * Filesystem.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_FILESYSTEM_HPP_
#define SRC_FILESYSTEM_HPP_

#include <string>
#include <unordered_map>
#include <vector>
#include "Option.hpp"

class Filesystem {
public:
    Filesystem(std::unordered_map<Option, std::string> options);

    void printDir();

private:
    std::vector<std::string> getDirContent(const std::string &path);
    std::string extractPathFromOptions();

    static constexpr auto currentPath_ = ".";
    std::unordered_map<Option, std::string> options_;
};

#endif /* SRC_FILESYSTEM_HPP_ */
