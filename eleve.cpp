//
// Created by fvinc on 9/20/2023.
//
#include <iostream>
#include "eleve.h"
void eleve::display(){
    std::cout<<"Nom : ";
    std::cout<<this->nom<<std::endl;
    std::cout<<"Specialite : ";
    std::cout<<this->specialite<<std::endl;
}
eleve::eleve(int id, std::string nom, std::string adresse,std::string specialite): personne(id,nom,adresse){
    this->specialite=specialite;
}
#include "eleve.h"
