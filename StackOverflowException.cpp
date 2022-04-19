//
// Created by malck on 06.04.2022.
//

#include "StackOverflowException.h"
namespace lab {
    StackOverflowException::StackOverflowException() {
        this->text = "Error occurred: StackOverflowException";
    }

    StackOverflowException::StackOverflowException(std::string a) {
        this->text = a;
    }

    std::string StackOverflowException::what() {
        return this->text;
    }

    StackOverflowException::~StackOverflowException() = default;
}