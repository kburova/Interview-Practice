//
// Created by Ksenia Burova on 1/23/18.
//

#ifndef INTERVIEW_MYQUEUE_H
#define INTERVIEW_MYQUEUE_H

#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

template <class T>
class MyQueue {
private:
    Stack <T> s1;
    Stack <T> s2;

public:
    T remove();
    void add(const T &data);
//    bool isEmpty();
//    T peek();
    void shift();
};


template <class T>
T MyQueue<T>::remove(){
    if (s2.isEmpty()) shift();
    return s2.pop()->data;
}

template <class T>
void MyQueue<T>::add(const T &data){
    s1.push(data);
}

template <class T>
void MyQueue<T>::shift(){
    while(!s1.isEmpty()){
        s2.push(s1.pop());
    }
};

#endif //INTERVIEW_MYQUEUE_H
