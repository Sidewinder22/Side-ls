/*
 * Format.hpp
 *
 *  Created on: 10 cze 2023
 *      Author: sidewin
 */

#ifndef SRC_FORMAT_HPP_
#define SRC_FORMAT_HPP_

#include <string>
#include <unordered_map>
#include <vector>
#include "Option.hpp"
#include "handlers/HandlerFactory.hpp"

class Format {
public:
    Format(std::unordered_map<Option, std::string> options);
    std::vector<std::string> formatOutput(std::vector<std::string> output);

private:
     std::unordered_map<Option, std::string> options_;
     std::unique_ptr<HandlerFactory> handlerFactory_;
};

#endif /* SRC_FORMAT_HPP_ */
