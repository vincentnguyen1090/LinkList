//
// Created by vince on 3/27/2023.
//
#include <iostream>
#include "Stack.h"
#include "Queue.h"
bool isPalindrome(std::string &word)
{
    Stack<char> stack;
    Queue<char> queue;
    for (int i = 0; i < word.length(); ++i) {
        stack.push(word.at(i));
        queue.push(word.at(i));
    }
    while(!queue.empty())
    {
        if(stack.top() == queue.front())
        {
            stack.pop();
            queue.pop();
        }
        else
        {
            return false;
        }
    }
    return true;
}