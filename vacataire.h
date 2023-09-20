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
    vacataire(int id, std::string nom, std::string adresse,std::string enseignement): personne(id,nom,adresse){
        this->enseignement=enseignement;
    }
    void display(){
        std::cout<<"Nom : ";
        std::cout<<this->nom<<std::endl;
        std::cout<<"Specialite : ";
        std::cout<<this->enseignement<<std::endl;
    }
};

#endif //UNTITLED_VACATAIRE_H
