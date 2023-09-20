#include <iostream>
#include "functions.h"
#include "eleve.h"
#include "linkedNumbers.h"
int main() {
    /*int arr[] = {10,20,30,40,50,60};
    maxArray(arr,sizeof(arr)/sizeof(arr[0]));
    minArray(arr,sizeof(arr)/sizeof(arr[0]));
*/
    //gestionUni();
    /*On declare ici la tete de la liste chainee, tout le parcours de la liste se fait à partir d'elle*/
    linkedNumbers* head=new linkedNumbers(2, nullptr, nullptr);
    head->count();
    head->add(3);
    head->add(4);
    head->count();
    head->show();
    head->remove(3);
    head->show();
    return 0;
}
