#include <iostream>
#include "functions.h"
#include "eleve.h"
#include "linkedNumbers.h"
#include "etudiant.h"
#include "gestion.h"

int main() {
    //Partie 1
    int arr[] = {10,20,30,40,50,60};
    int* res=minAndMax(arr,sizeof(arr)/sizeof(arr[0]));
    //Partie 2
    //gestionUni();
    //Partie 3
    /*On declare ici la tete de la liste chainee, tout le parcours de la liste se fait à partir d'elle*/
    /*linkedNumbers* head=new linkedNumbers(2, nullptr, nullptr);
    head->count();
    head->add(3);
    head->add(4);
    head->count();
    head->show();
    head->remove(3);
    head->show();*/
    //Partie 4
    //On instancie une classe de gestion et quelques étudiants de test
    //Le fichier .txt sera créé dans /untitled/cmake-build-debug
    GestionEtudiants gestion;
    Etudiant jean(1, "Jean", 'M', 20);
    Etudiant marie(2, "Marie", 'F', 22);
    Etudiant paul(3, "Paul", 'M', 24);

    gestion.ajouterEtudiant(&jean);
    gestion.ajouterEtudiant(&marie);
    gestion.ajouterEtudiant(&paul);

    gestion.afficher();
    gestion.enregistrerDansFichier();
    gestion.supprimerEtudiant(1);
    gestion.afficher();
    gestion.enregistrerDansFichier();
    return 0;
}
