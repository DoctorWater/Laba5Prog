//
// Created by malck on 06.04.2022.
//

#include "Stack.h"
#include "StackOverflowException.h"
#include "NoElementStackException.h"

namespace lab {
    template<class T, int N>
    T Stack<T, N>::pop() {
        try {
            if (this->stack.size() == 0)
                throw NoElementStackException("There is nothing to pop!");
            T result=this->stack.back();
            this->stack.pop_back();
            return result;
        }
        catch (NoElementStackException &exception) {
            cout << exception.what() << endl;
        }
    }

    template<class T, int N>
    void Stack<T, N>::push(T val) {
        try {
            if (this->stack.size() == N)
                throw StackOverflowException("Stack Overflow!");
            this->stack.push_back(val);
        }
        catch (StackOverflowException &exception) {
            cout << exception.what() << endl;
        }
    }

    template<class T, int N>
     bool Stack<T, N>::isEmpty() {
         if (this->stack.size() == 0)
             return true;
         return false;
     }

    template
    class Stack<char, 10>;

    template
    class Stack<int, 10>;
}