//
// Created by malck on 06.04.2022.
#ifndef LABA5PROGA_STACK_H
#define LABA5PROGA_STACK_H
#include <iostream>

using namespace std;

#include "vector"


namespace lab {
    template<class T, int N>
    class Stack {
    private:
        vector<T> stack;
    public:
        void push(T);

        T pop();

        bool isEmpty();
    };
}


#endif //LABA5PROGA_STACK_H
