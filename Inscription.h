#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include "Etudiant.h"

#include <iostream>

using namespace std;

class Inscription
{
    public:
        Etudiant E;
        string filiere;
        int anneeEtude;
    public:
        Inscription(){}
        Inscription(Etudiant, string, int);
        void affiche(const Inscription &I);
        static void afficheIGalphabetique(Inscription inscriptions[], int taille);
        static void afficheFilles2(Inscription *inscriptions, int taille);
};

#endif // INSCRIPTION_H
