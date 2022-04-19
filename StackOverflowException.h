//
// Created by malck on 06.04.2022.
//

#ifndef LABA5PROGA_STACKOVERFLOWEXCEPTION_H
#define LABA5PROGA_STACKOVERFLOWEXCEPTION_H

#include <iostream>

namespace lab {
    class StackOverflowException : std::exception {
    private:
        std::string text;
    public:
        StackOverflowException();

        explicit StackOverflowException(std::string a);

        std::string what();

        ~StackOverflowException();
    };

}
#endif //LABA5PROGA_STACKOVERFLOWEXCEPTION_H
