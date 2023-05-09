//
// Created by vince on 3/23/2023.
//

#ifndef LINK_LIST_QUEUE_H
#define LINK_LIST_QUEUE_H
#include "LinkList.h"
template<typename T>
class Queue : public LinkList<T>
{
public:
    Queue();
    Queue(std::initializer_list<T> arr);
    void push(T item);
    void pop();
    T& front();
    int size();
    bool empty();
};

#include "Queue.cpp"
#endif //LINK_LIST_QUEUE_H
