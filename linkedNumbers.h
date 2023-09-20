//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_LINKEDNUMBERS_H
#define UNTITLED_LINKEDNUMBERS_H


#include <iostream>

class linkedNumbers {
private:
    int x;
    linkedNumbers *previous;
    linkedNumbers *next;
public:
    linkedNumbers(int x, linkedNumbers *previous, linkedNumbers *next);

    int count();

    void add(int x);

    void show();

    void remove(int x);
};
#endif

