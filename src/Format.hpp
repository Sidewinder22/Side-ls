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
#include "handlers/HandlerFactory.hpp"

class Format {
public:
    Format(std::vector<Options> options);
    std::vector<std::string> formatOutput(
        const std::vector<std::string>& output);

private:
     std::vector<std::string> applyOption(Options option,
         const std::vector<std::string>& output);

     std::vector<Options> options_;
     std::unique_ptr<HandlerFactory> handlerFactory_;
};

#endif /* SRC_FORMAT_HPP_ */
