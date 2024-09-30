#pragma once
#include<iostream>
using namespace std;

class stack {
private:
    // creating a node
    struct node {
        int data;
        node* next;
    };

    node* head; 
    int n;

public:
    // Constructor
    stack();

    //creating operation initialization
    void push(int);
    int pop();
    int peek();
    bool isEmpty();
    int size();

    //destructor
    ~stack();
};

