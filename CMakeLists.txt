cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        functions.cpp
        functions.h
        personne.cpp
        personne.h
        eleve.cpp
        eleve.h
        titulaire.cpp
        titulaire.h
        vacataire.cpp
        vacataire.h
        linkedNumbers.cpp
        linkedNumbers.h
        etudiant.cpp
        etudiant.h
        gestion.cpp
        gestion.h)
