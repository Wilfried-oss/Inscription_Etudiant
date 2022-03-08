#include "Inscription.h"

/*
    Le constructeur de la classe Inscription qui prend comme premier
    parametre un objet Etudiant par la relation d'utilisation.
    (Utilisation de l'objet Etudiant dans les methodes de Inscription)

*/
Inscription::Inscription(Etudiant e, string filiere, int anneeEtude)
{
    this->E = e;
    this->filiere = filiere;
    this->anneeEtude = anneeEtude;
}

/*
    La fonction affiche qui prend lobjet cree pour l'afficher

*/
void Inscription::affiche(const Inscription &I)
{
    cout << "\t Nom : " << I.E.nom << endl;
    cout << "\t Prenom : " << I.E.prenom << endl;
    cout << "\t Sexe : " << I.E.sexe << endl;
    cout << "\t Date Naissance : " << I.E.dateNais << endl;
    cout << "\t Filiere : " << I.filiere << endl;
    cout << "\t Annee Etude : " << I.anneeEtude << endl;
    cout << endl;
}


/*
    La fonction de trie

*/
void Inscription::afficheIGalphabetique(Inscription inscriptions[], int taille)
{
    int i = 0, j;
    bool perm;
    perm = true;
    Inscription tp;

    for(i=0; i < taille; ++i)
    {
        while(perm && i < taille)
        {
            perm = false;
            j=0;
            while(j < taille-1 )
            {
                if(inscriptions[j].E.nom > inscriptions[j+1].E.nom)
                {
                    perm = true;
                    tp.E.nom = inscriptions[j].E.nom;
                    inscriptions[j].E.nom = inscriptions[j+1].E.nom;
                    inscriptions[j+1].E.nom = tp.E.nom;
                }
                j += 1;
             }
             i += 1;
        }
    }
    cout << endl;

    /*
     * Apres avoir trie toutes filieres confondues, on affiche seulement les etudiants de la IG quimporte
     * le sexe , lannee detude ,etc....
   */

    cout << "Filiere IG classee en ordre alphabetique : " << endl;

    for(int i(0); i < taille; ++i)
    {
        if(inscriptions[i].filiere == "IG")

        {
            inscriptions[i].affiche(inscriptions[i]); // appel de affiche();
        }
    }
}
void Inscription::afficheFilles2(Inscription inscriptions[], int taille)
{
    cout << endl;
    cout << "Les filles de la 2eme Annee " << endl;
    for(int i(0); i < taille; ++i)
    {
        if(inscriptions[i].E.sexe == 'F' && inscriptions[i].anneeEtude == 2)
        {
            inscriptions[i].affiche(inscriptions[i]);// appel de affiche();
        }
    }
}
