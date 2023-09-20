//
// Created by fvinc on 9/20/2023.
//

#include "titulaire.h"

titulaire::titulaire(int id, std::string nom, std::string adresse, std::string recherche) : personne(id,nom,adresse){
    this->recherche=recherche;
}

void titulaire::display() {
    std::cout<<"Nom : ";
    std::cout<<this->nom<<std::endl;
    std::cout<<"Domaine de recherche : ";
    std::cout<<this->recherche<<std::endl;
}
