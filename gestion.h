//
// Created by fvinc on 9/20/2023.
//

#ifndef UNTITLED_GESTION_H
#define UNTITLED_GESTION_H


#include <string>
#include "etudiant.h"

class GestionEtudiants {
private:
    std::vector<Etudiant> etudiants;

public:
    void ajouterEtudiant(const Etudiant* e);

    void mettreAJour(int id, const std::string nom, char sexe, int age);

    void supprimerEtudiant(int id);

    void rechercherParNom(const std::string nom);

    void trierParNom();

    void afficher() {
        for (const Etudiant& e : etudiants) {
            Etudiant::afficher(&e);
        }
    }

    void lireDepuisFichier();

    void enregistrerDansFichier();
};
#endif //UNTITLED_GESTION_H
