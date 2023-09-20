//
// Created by fvinc on 9/20/2023.
//

#include "gestion.h"

void GestionEtudiants::rechercherParNom(const std::string nom) {
    for (const Etudiant& e : etudiants) {
        if (e.getNom() == nom) {
            Etudiant::afficher(&e);
        }
    }
}

void GestionEtudiants::trierParNom() {
    std::sort(etudiants.begin(), etudiants.end(),
              [](const Etudiant& a, const Etudiant& b) {
                  return a.getNom() < b.getNom();
              });
}

void GestionEtudiants::lireDepuisFichier() {
    std::ifstream file("etudiants_entree.txt");
    if (!file.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier d'entrée." << std::endl;
        return;
    }

    etudiants.clear();

    int id, age;
    char sexe;
    std::string nom;
    while (file >> id >> nom >> sexe >> age) {
        Etudiant e(id, nom, sexe, age);
        etudiants.push_back(e);
    }

    file.close();
}

void GestionEtudiants::enregistrerDansFichier() {
    std::ofstream file("etudiants_sortie.txt");
    if (!file.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier de sortie." << std::endl;
        return;
    }

    for (const Etudiant& e : etudiants) {
        file << e.getID() << " " << e.getNom() << " " << e.getSexe() << " " << e.getAge() << std::endl;
    }

    file.close();
}

void GestionEtudiants::supprimerEtudiant(int id) {
    auto it = std::remove_if(etudiants.begin(), etudiants.end(),
                             [id](const Etudiant& e) { return e.getID() == id; });
    etudiants.erase(it, etudiants.end());
}

void GestionEtudiants::mettreAJour(int id, const std::string nom, char sexe, int age) {
    for (Etudiant& e : etudiants) {
        if (e.getID() == id) {
            e.setNom(nom);
            e.setSexe(sexe);
            e.setAge(age);
            return;
        }
    }
}

void GestionEtudiants::ajouterEtudiant(const Etudiant *e) {
    etudiants.push_back(*e);
}
