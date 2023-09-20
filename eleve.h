//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_ELEVE_H
#define UNTITLED_ELEVE_H


#include <iostream>
#include "personne.h"

class eleve: public personne {
private:
    std::string specialite;
public:
    eleve(int id, std::string nom, std::string adresse,std::string specialite);
    void display();
};


#endif //UNTITLED_ELEVE_H
