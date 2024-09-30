#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    stack quiz;

    //inputting stack values
    quiz.push(10);
    quiz.push(20);
    quiz.push(30);

    //displaying operations
    cout << "number of stack elements: " << quiz.size() << endl;

    cout << "first element of stack: " << quiz.peek() << endl;

    cout << "Popping: " << quiz.pop() << endl;


    return 0;
}
