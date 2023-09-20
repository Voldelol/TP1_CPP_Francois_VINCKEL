//
// Created by fvinc on 9/20/2023.
//
#include <string>
#ifndef UNTITLED_PERSONNE_H
#define UNTITLED_PERSONNE_H


class personne {
protected:
    int id;
    std::string nom;
    std::string addresse;
public:
    personne(int id,std::string nom,std::string addresse){
        this->id=id;
        this->nom=nom;
        this->addresse=addresse;
    }
    virtual void display(){};
};


#endif //UNTITLED_PERSONNE_H
