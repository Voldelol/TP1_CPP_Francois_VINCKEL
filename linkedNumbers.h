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
    linkedNumbers(int x, linkedNumbers *previous, linkedNumbers *next) {
        this->x = x;
        this->previous = previous;
        this->next = next;
    };

    int count() {
        int res = 1;

        linkedNumbers *temp = this;
        while (temp->next != nullptr) {

            res++;
            temp = temp->next;

        }
        temp->next = nullptr;
        std::cout << "nombre d'elements :";
        std::cout << res << std::endl;
        return res;
    }

    void add(int x) {
        linkedNumbers *temp = this;
        while (temp->next != nullptr) {
            temp = temp->next;

        }

        temp->next = new linkedNumbers(x, temp, nullptr);


    }

    void show() {

        linkedNumbers *temp = this;
        while (temp != nullptr) {

            std::cout << "Number is : ";
            std::cout << temp->x << std::endl;
            temp = temp->next;

        }

    }

    void remove(int x) {
        linkedNumbers *temp = this;
        while (temp->x != x) {
            temp = temp->next;

        }
        (temp->previous)->next = temp->next;
        (temp->next)->previous = temp->previous;

    }
};
#endif

