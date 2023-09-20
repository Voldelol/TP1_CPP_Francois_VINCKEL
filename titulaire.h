//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_TITULAIRE_H
#define UNTITLED_TITULAIRE_H


#include <string>
#include <iostream>
#include "personne.h"

class titulaire: public personne {
private:
    std::string recherche;
public:
    titulaire(int id, std::string nom, std::string adresse,std::string recherche);
    void display();
};


#endif //UNTITLED_TITULAIRE_H
