//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_VACATAIRE_H
#define UNTITLED_VACATAIRE_H


#include <string>
#include <iostream>
#include "personne.h"

class vacataire: public personne {
private:
    std::string enseignement;
public:
    vacataire(int id, std::string nom, std::string adresse,std::string enseignement);
    void display();
};

#endif //UNTITLED_VACATAIRE_H
