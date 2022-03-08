#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>

using namespace std;

class Etudiant
{
    public:
        string nom;
        string prenom;
        char sexe;
        int dateNais;

    public:
        Etudiant(){}
        Etudiant(string, string, char, int );
};


#endif // ETUDIANT_H
