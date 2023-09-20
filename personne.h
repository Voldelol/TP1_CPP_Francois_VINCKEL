//
// Created by fvinc on 9/20/2023.
//
#include <string>
#ifndef UNTITLED_PERSONNE_H
#define UNTITLED_PERSONNE_H

//La classe personne est la classe parente des 3 trois autres utilisées dans cette partie
//display est définie comme virtuelle pour avoir un comportement polymorphique
class personne {
protected:
    int id;
    std::string nom;
    std::string addresse;
public:
    personne(int id,std::string nom,std::string addresse);
    virtual void display(){};
};


#endif //UNTITLED_PERSONNE_H
