//
// Created by Ksenia Burova on 1/23/18.
//

#ifndef INTERVIEW_SETOFSTACKS_H
#define INTERVIEW_SETOFSTACKS_H

#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

template <class T>
class MyQueue {
private:
    vector < Stack<T> > stacks;
    int maxSize = 3;

public:
    T pop();
    void push(const T &data);
//    bool isEmpty();
//    T peek();
};


template <class T>
T MyQueue<T>::pop(){
    if (stacks.size() != 0) {
        T data = stacks[stacks.size()-1].pop();
        if (stacks[stacks.size()-1].size() == 0) {
            stacks.resize(stacks.size()-1);
        }
        return data;
    }
}

template <class T>
void MyQueue<T>::push(const T &data){
    if (stacks.size() == 0) {
        Stack <T> s;
        stacks.push_back(s);
    }

    if ( stacks[stacks.size()-1].size() < maxSize) {
        stacks[stacks.size()-1].push(data);
    }
}
#endif //INTERVIEW_SETOFSTACKS_H