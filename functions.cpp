#include <iostream>
#include "functions.h"
#include "personne.h"
#include "eleve.h"
#include "vacataire.h"
#include "titulaire.h"
#include <vector>

void maxArray(int arr[],int size){

    int res=arr[0];
    for (int i = 0; i < size; ++i) {
        std::cout<<i<<std::endl;
        if(arr[i]>res){
            res=arr[i];
        }
    }
    std::cout<<"Max elem is :";
    std::cout<<res<<std::endl;
}
void minArray(int arr[],int size){
    int res=arr[0];
    for (int i = 0; i < size; ++i) {
        std::cout<<i<<std::endl;
        if(arr[i]<res){
            res=arr[i];
        }
    }
    std::cout<<"Min elem is :";
    std::cout<<res<<std::endl;
}
void enterData(int* idPtr,std::string* nomPtr,std::string* addressePtr){
    std::cout<<"Entrez l'ID"<<std::endl;
    std::cin>>*idPtr;
    std::cout<<"Entrez le nom"<<std::endl;
    std::cin>>*nomPtr;
    std::cout<<"Entrez l'addresse"<<std::endl;
    std::cin>>*addressePtr;
}
void gestionUni(){
    std::vector<personne*> dataBase;
    std::cout<<"Programme de gestion de l'Université"<<std::endl;
    while (true){
        std::cout<<"Appuyez sur 1 pour creer un eleve"<<std::endl;
        std::cout<<"Appuyez sur 2 pour creer un vacataire"<<std::endl;
        std::cout<<"Appuyez sur 3 pour creer un titulaire"<<std::endl;
        std::cout<<"Appuyez sur 4 pour afficher la base de donnees"<<std::endl;
        int input;
        std::cin>>input;
        int id;
        std::string nom;
        std::string addresse;
        switch (input) {
            case 1:{
                enterData(&id,&nom,&addresse);
                std::string specialite;
                std::cout<<"Entrez la specialité"<<std::endl;
                std::cin>>specialite;
                dataBase.push_back(new eleve(id,nom,addresse,specialite));
                break;
            }
            case 2: {
                enterData(&id, &nom, &addresse);
                std::string enseignement;
                std::cout << "Entrez le domaine d'enseignement" << std::endl;
                std::cin >> enseignement;
                dataBase.push_back(new vacataire(id, nom, addresse, enseignement));
                break;
            }
            case 3: {
                enterData(&id, &nom, &addresse);
                std::string recherche;
                std::cout << "Entrez le domaine de recherche" << std::endl;
                std::cin >> recherche;
                dataBase.push_back(new titulaire(id, nom, addresse, recherche));
                break;
            }
            case 4:{
                for (int i = 0; i < dataBase.size(); ++i) {
                    (*dataBase.at(i)).display();
                }
                break;
            }
        }
    }
}