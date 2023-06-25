/*
 * Format.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_FORMAT_HPP_
#define SRC_FORMAT_HPP_

#include <string>
#include <vector>
#include "Options.hpp"
#include "CommandFactory.hpp"

class Format {
public:
    Format(std::vector<Options> options);
     auto formatOutput(const std::vector<std::string>& output)
        -> std::vector<std::string>;

private:
     auto applyOption(Options option, const std::vector<std::string>& output)
        -> std::vector<std::string>;
     auto cleanupOutput(const std::vector<std::string>& output)
        -> std::vector<std::string>;

     std::vector<Options> options_;
     std::unique_ptr<CommandFactory> factory_;
};

#endif /* SRC_FORMAT_HPP_ */
