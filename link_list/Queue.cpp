//
// Created by vince on 3/23/2023.
//

#ifndef LINK_LIST_QUEUE_CPP
#define LINK_LIST_QUEUE_CPP
#include "Queue.h"
template<typename T>
Queue<T>::Queue() : LinkList<T>()
{

}
template<typename T>
Queue<T>::Queue(std::initializer_list<T> arr) : LinkList<T>(arr)
{

}
template<typename T>
void Queue<T>::push(T item)
{
    LinkList<T>::push_back(item);
}
template<typename T>
void Queue<T>::pop()
{
    LinkList<T>::pop_front();
}
template<typename T>
T& Queue<T>::front()
{
    return LinkList<T>::front();
}
template<typename T>
int Queue<T>::size()
{
    return LinkList<T>::size();
}
template<typename T>
bool Queue<T>::empty()
{
    return LinkList<T>::empty();
}


#endif