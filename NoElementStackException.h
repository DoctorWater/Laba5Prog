//
// Created by malck on 06.04.2022.
//
#include <iostream>

#ifndef LABA5PROGA_NOELEMENTSTACKEXCEPTION_H
#define LABA5PROGA_NOELEMENTSTACKEXCEPTION_H

namespace lab {
    class NoElementStackException : public std::exception {
    private:
        std::string text;
    public:
        NoElementStackException();

        explicit NoElementStackException(std::string a);

        std::string what();

        ~NoElementStackException();
    };
}

#endif //LABA5PROGA_NOELEMENTSTACKEXCEPTION_H
