//
// Created by vince on 3/16/2023.
//

#ifndef LINK_LIST_LINKLIST_CPP
#define LINK_LIST_LINKLIST_CPP
#include "LinkList.h"
#include "Stack.h"
#include "Queue.h"

template<typename T>
Node<T>* LinkList<T>::search(const T &data)
{
    Node<T> *walker = head;
    while(walker != nullptr)
    {
        if(walker->data == data)
            return walker;
        else
            walker = walker->next;
    }
}
template<typename T>
void LinkList<T>::add_first_node(const T &data)
{
    head = new Node<T>;
    head->data = data;
    tail = head;
    tail->next = nullptr;
}
template<typename T>
LinkList<T>::LinkList()
{
    head = nullptr, tail = nullptr;
}
template<typename T>
void LinkList<T>::push_front(const T &data)
{
    if(empty())
        add_first_node(data);
    else
    {
        Node<T> *n = new Node<T>;
        n->data = data;
        n->next = head;
        head = n;
    }
    ++m_size;
}
template<typename T>
void LinkList<T>::push_back(const T &data)
{
    if(head == nullptr)
        add_first_node(data);

    else
    {
        Node<T> *n = new Node<T>;
        n->data = data;
        n->next = nullptr;
        tail->next = n;
        tail = n;
    }
    ++m_size;
}
template<typename T>
void LinkList<T>::pop_front()
{
   Node<T> *temp = head;
   head = head->next;
   --m_size;
   delete temp;
}
template<typename T>
void LinkList<T>::pop_back()
{
    //if only one node in the list
    if(head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }
    Node<T> *walker = head;
    while(walker->next != tail)
        walker = walker->next;

    delete tail;
    tail = walker;
    tail->next = nullptr;
    --m_size;
}
template<typename T>
T& LinkList<T>::back()
{
    return tail->data;
}
template<typename T>
T& LinkList<T>::front()
{
    return head->data;
}
template<typename T>
int LinkList<T>::size()
{
    return m_size;
}
template<typename T>
bool LinkList<T>::empty()
{
    return size() == 0;
}
template<typename T>
void LinkList<T>::remove(const T &data)
{
    Node<T> *walker = head;
    Node<T> *target = search(data);

    while(walker->next != target)
            walker = walker->next;
    if(target == tail){
        tail = walker;
        tail->next = nullptr;
    }
    else
        walker->next = target->next;

    delete target;
    --m_size;
}
template<typename T>
void LinkList<T>::insert_before(const T &source, const T &target)
{
    Node<T> *n = new Node<T>;
    n->data = source;

    Node<T> *temp = search(target);
    if(temp == head)
    {
        n->next = head;
        head = n;
    }
    n->next = temp;

    Node<T> *walker = head;
    while(walker->next != temp)
        walker = walker->next;

    walker->next = n;
    ++m_size;
}
template<typename T>
void LinkList<T>::insert_after(const T &source, const T &target)
{
    Node<T> *n = new Node<T>;
    n->data = source;

    Node<T> *temp = search(target);
    if(tail == temp){
        tail->next = n;
        n->next = nullptr;
        tail = n;
    }
    else{
        n->next = temp->next;
        temp->next = n;
    }
    ++m_size;
}
template<typename U>
std::ostream& operator<<(std::ostream &out, const LinkList<U> &list)
{
    Node<U> *walker = list.head;
    while(walker != nullptr)
    {
        out << walker->data << " ";
        walker = walker->next;
    }
    return out;
}
template<typename T>
void LinkList<T>::operator+=(const T &source)
{
    push_back(source);
}
template<typename T>
LinkList<T>::LinkList(std::initializer_list<T> arr) : LinkList()
{
    for(const auto& element: arr)
        push_back(element);
}
template<typename T>
LinkList<T>::~LinkList()
{
    Node<T> *walker = head;
    while(walker != nullptr )
    {
        Node<T>* next = walker->next;
        delete walker;
        walker = next;
    }
}
template<typename T>
LinkList<T>::LinkList(const LinkList &list) : LinkList()
{
    Node<T> *walker = list.head;
    while(walker != nullptr)
    {
        push_back(walker->data);
        walker = walker->next;
    }
}
template<typename T>
LinkList<T>& LinkList<T>::operator=(const LinkList<T> &list)
{
    if(this == &list)
        return *this;
    m_size = 0;
    this->~LinkList();
    Node<T> *walker = list.head;
    while(walker != nullptr)
    {
        push_back(walker->data);
        walker = walker->next;
    }
    return *this;
}

#endif

