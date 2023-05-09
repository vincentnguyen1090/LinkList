//
// Created by vince on 3/16/2023.
//

#ifndef LINK_LIST_NODE_H
#define LINK_LIST_NODE_H

template<typename T>
struct Node
{
    T data;
    Node<T> *next = nullptr;
};
#endif //LINK_LIST_NODE_H
