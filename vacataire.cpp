//
// Created by fvinc on 9/20/2023.
//

#include "vacataire.h"

vacataire::vacataire(int id, std::string nom, std::string adresse, std::string enseignement) : personne(id,nom,adresse){
    this->enseignement=enseignement;
}

void vacataire::display() {
    std::cout<<"Nom : ";
    std::cout<<this->nom<<std::endl;
    std::cout<<"Specialite : ";
    std::cout<<this->enseignement<<std::endl;
}
