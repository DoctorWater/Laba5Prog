//
// Created by malck on 06.04.2022.
//

#include "NoElementStackException.h"

namespace lab {
    std::string NoElementStackException::what() {
        return this->text;
    }

    NoElementStackException::NoElementStackException(std::string a) {
        this->text = a;
    }

    NoElementStackException::NoElementStackException() {
        this->text = "Error occurred: NoElementStackException";
    }

    NoElementStackException::~NoElementStackException() = default;
}