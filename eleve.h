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
    eleve(int id, std::string nom, std::string adresse,std::string specialite): personne(id,nom,adresse){
        this->specialite=specialite;
    }
    void display(){
        std::cout<<"Nom : ";
        std::cout<<this->nom<<std::endl;
        std::cout<<"Specialite : ";
        std::cout<<this->specialite<<std::endl;
    }
};


#endif //UNTITLED_ELEVE_H
