#include "stack.h"
#include<iostream>
using namespace std;

//constructor definition
stack::stack() {
	n = 0;
	head = NULL;
}

//push definition = operation to add an element at the start of stack
void stack::push(int a) {
    node* newNode = new node;
    newNode->data = a;
    newNode->next = head; 
    head = newNode;      
    n++;
}

//pop definiton = remove and return the top element
int stack::pop() {

        int popp = head->data;
        node* temp = head;    // creating temp node and storing head in it
        head = head->next;     // Moving head to the next node
        delete temp;         // Delete the old top node
        return popp;
    }

//peek definition = return/display the first node without removing it
int stack::peek() {
    return head->data;
}

//isEmpty definition = to check if the stack is empty or not
bool stack::isEmpty() {
    if (head == NULL)
        cout << "The stack is empty" << endl;
    else if (head != NULL)
        cout << "The stack is not empty" << endl;
}

//size definiton = to check the number of elements present in the stack
int stack::size() {
    return n;
}

//destructor
stack :: ~stack() {

}
