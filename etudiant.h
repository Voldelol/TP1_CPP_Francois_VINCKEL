//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_ETUDIANT_H
#define UNTITLED_ETUDIANT_H


#include <string>

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
/*Laplus part des méthodes étant très courtes elles ont étées définies in-line*/
class Etudiant {
private:
    int identifiant;
    std::string nom;
    char sexe;
    int age;

public:
    Etudiant(int id, const std::string& n, char s, int a)
            : identifiant(id), nom(n), sexe(s), age(a) {}

    int getID() const { return identifiant; }
    std::string getNom() const { return nom; }
    char getSexe() const { return sexe; }
    int getAge() const { return age; }

    void setNom(const std::string n) { nom = n; }
    void setSexe(char s) { sexe = s; }
    void setAge(int a) { age = a; }

    static void afficher(const Etudiant* e) {
        std::cout << "ID: " << e->getID() << ", Nom: " << e->getNom() << ", Sexe: " << e->getSexe() << ", Age: " << e->getAge() << std::endl;
    }
};


#endif //UNTITLED_ETUDIANT_H
