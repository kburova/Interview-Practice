//
// Created by Ksenia Burova on 1/22/18.
//

#ifndef INTERVIEW_STACK_H
#define INTERVIEW_STACK_H

#include <iostream>
using namespace std;

template <class T>
class node {
    private:
        T data;
        class node *next;
    public:
    node(const T& d, node *n) : data(d), next(n) {};
};

template <class T>
class stack {

    private:
        T *top;
        int size;

    public:
//        stack();
//        ~stack();
//        T pop();
//        void push(T);
//        T peek();
};


#endif //INTERVIEW_STACK_H
