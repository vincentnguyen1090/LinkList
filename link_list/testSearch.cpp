//
// Created by vince on 3/18/2023.
//

#include "testSearch.h"

void testSearch()
{
    LinkList<int> list;
    for (int i = 0; i < 5; ++i) {
        list.push_back(i);
    }
    std::cout << list << std::endl;
    list.remove(4);
    list.remove(3);
    std::cout << "back: " << list.back() << std::endl;
    std::cout << list;
}
