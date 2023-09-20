//
// Created by fvinc on 9/20/2023.
//

#include "linkedNumbers.h"


linkedNumbers::linkedNumbers(int x, linkedNumbers *previous, linkedNumbers *next) {
    this->x = x;
    this->previous = previous;
    this->next = next;
}

int linkedNumbers::count() {
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

void linkedNumbers::add(int x) {
    linkedNumbers *temp = this;
    while (temp->next != nullptr) {
        temp = temp->next;

    }

    temp->next = new linkedNumbers(x, temp, nullptr);


}

void linkedNumbers::show() {

    linkedNumbers *temp = this;
    while (temp != nullptr) {

        std::cout << "Number is : ";
        std::cout << temp->x << std::endl;
        temp = temp->next;

    }

}

void linkedNumbers::remove(int x) {
    linkedNumbers *temp = this;
    while (temp->x != x) {
        temp = temp->next;

    }
    (temp->previous)->next = temp->next;
    (temp->next)->previous = temp->previous;

}
