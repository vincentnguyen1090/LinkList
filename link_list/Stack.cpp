//
// Created by vince on 3/23/2023.
//

#ifndef LINK_LIST_STACK_CPP
#define LINK_LIST_STACK_CPP
#include "Stack.h"
#include "LinkList.h"
#include "LinkList.cpp"
template<typename T>
Stack<T>::Stack() : LinkList<T>()
{

}
template<typename T>
Stack<T>::Stack(std::initializer_list<T> arr) : LinkList<T>(arr)
{

}
template<typename T>
void Stack<T>::push(T& item)
{
    LinkList<T>::push_back(item);
}
template<typename T>
void Stack<T>::pop()
{
    LinkList<T>::pop_back();
}
template<typename T>
T& Stack<T>::top()
{
    return LinkList<T>::back();
}
template<typename T>
int Stack<T>::size()
{
    return LinkList<T>::size();
}
template<typename T>
bool Stack<T>::empty()
{
    return LinkList<T>::empty();
}

#endif