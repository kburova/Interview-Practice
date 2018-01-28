//
// Created by Ksenia Burova on 1/22/18.
//

#ifndef INTERVIEW_STACK_H
#define INTERVIEW_STACK_H

#include <iostream>
using namespace std;

template <class T>
class Stack {
    private:
        struct Node {
            T data;
            class Node *next;
            Node(const T &d, Node *n) : data(d), next(n) {};
        };
        Node *top;
        int stackSize;

    public:
        Stack();
        ~Stack();
        T pop();
        void push(const T &data);
        bool isEmpty();
        int size();
        T peek();
};

template <class T>
Stack<T>::Stack(){
    top = NULL;
    stackSize = 0;
}

template <class T>
Stack<T>::~Stack(){
    while( top != NULL) {
        (void)pop();
    }
}

template <class T>
T Stack<T>::pop(){
    Node *n;
    T data;
    if (!isEmpty()) {
        data = n->data;
        n = top;
        top = top->next;
        delete (n);
        stackSize--;
        return data;
    }
}

template <class T>
void Stack<T>::push(const T &data){
    top = new Node(data, top);
    stackSize++;
}

template <class T>
T Stack<T>::peek(){
    if (!isEmpty())
        return top->data;
}

template <class T>
bool Stack<T>::isEmpty(){
    return stackSize == 0;
}

template <class T>
int Stack<T>::size(){
    return stackSize;
}
#endif //INTERVIEW_STACK_H
