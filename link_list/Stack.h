//
// Created by vince on 3/23/2023.
//

#ifndef LINK_LIST_STACK_H
#define LINK_LIST_STACK_H
#include "Node.h"
#include "LinkList.h"
#include <iostream>
template<typename T>
class Stack : public LinkList<T>
{
public:
    Stack();
    Stack(std::initializer_list<T> arr);
    void push(T& item);
    void pop();
    T& top();
    int size();
    bool empty();
};

#include "Stack.cpp"
#endif //LINK_LIST_STACK_H
