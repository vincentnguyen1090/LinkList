#include <iostream>
#include "LinkList.h"
#include "testSearch.h"
#include "Stack.h"
#include "Queue.h"
#include "functions.h"
#include "Math.h"
int main()
{
/*    LinkList<int> list;
    LinkList<int> list2 = {1,2,3,4,5};
    std::cout << "List 2: " << list2 << std::endl;
    LinkList<int> list3(list2);
    LinkList<int> list4;
    list4 = list3;
    std::cout << "list 3: " << list3 << std::endl;
    std::cout << "List 4: " << list4 << std::endl;
    list.push_back(2); // list = 2

    list += 3; // list = 2 3

    list.push_front(4); // list = 4 2 3

    std::cout << list << std::endl;  // prints 4 2 3

    list.insert_before(5, 2);

    std::cout << list << std::endl; // prints 4 5 2 3

    list.insert_after(8, 5);

    std::cout << list << std::endl; // prints 4 5 8 2 3*/

    /*LinkList<int> list;
    for (int i = 0; i < 3; ++i)
    {
        list.push_back(i);
    }
    Stack<int> stack;
    for (int i = 0; i < 5; ++i) {
        stack.push(i);
    }
    stack.pop();
    std::cout << "top of stack: "<< stack.top() << std::endl;
    std::cout << stack << std::endl;*/

    std::string word = "racecar";
    if(isPalindrome(word))
        std::cout << word << " is a palindrome";
    else
        std::cout << word << " is not a palindrome";


}
