#include <iostream>
#include "Stack.h"
using namespace std;
template <class T>
void swap(T *a, T *b){
    T *temp = new T;
    *temp=*a;
    *a=*b;
    *b=*temp;
    delete temp;
}
int main() {
    int a,b;
    a=10, b=5;
    swap<int>(&a,&b);
    cout << a << " " << b << endl;
    lab::Stack<char, 10> stackChar;
    char input= 'q';
    while(input != '0')
    {
        cin >> input;
        stackChar.push(input);
    }
    while (!stackChar.isEmpty())
       cout << stackChar.pop() << endl;
    lab::Stack<int, 10> stackInt;
    int input2= 1;
    while(input2 !=0)
    {
        cin >> input2;
        stackInt.push(input2);
    }
    while (!stackChar.isEmpty())
        cout << stackChar.pop() << endl;
    return 0;

}
