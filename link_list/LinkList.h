//
// Created by vince on 3/16/2023.
//

#ifndef LINK_LIST_LINKLIST_H
#define LINK_LIST_LINKLIST_H
#include "Node.h"
#include <iostream>
template<typename T>
class LinkList
{
private:
    Node<T> *head, *tail;
    int m_size = 0;

    Node<T>* search(const T &data);
    void add_first_node(const T &data);
public:
    LinkList();
    LinkList(std::initializer_list<T> arr);
    LinkList(const LinkList &list);
    ~LinkList();
    void push_front(const T &data);
    void push_back(const T &data);
    void pop_front();
    void pop_back();
    T& back();
    T& front();

    virtual int size();
    bool empty();
    void remove(const T &data);
    void insert_before(const T &source, const T &target);
    void insert_after(const T &source, const T &target);


    template<typename U>
    friend std::ostream& operator<<(std::ostream &out, const LinkList<U> &list);

    void operator+=(const T &source);
    LinkList& operator=(const LinkList<T> &list);

};


#include "LinkList.cpp"
#endif //LINK_LIST_LINKLIST_H
