#include "Inscription.h"
using namespace std;
int main()
{

    int n;
    cout << "Combien d inscriptions svp ? : ";
    cin >> n;

    Inscription inscriptions[n];
    Etudiant etudiants[n];

    string nom, prenom, filiere;
    char sexe;
    int dateNaiss, anneeEtude;

    int next;

    for(int i(0); i < n; ++i)
    {
        cout << "Inscription " <<i+1 <<endl;
        cout <<"\t Nom : "  ;
        cin >> nom ;
        cout <<"\t Prenom : " ;
        cin >> prenom ;
        cout <<"\t Sexe(F/M) : " ;
        cin >> sexe ;
        cout <<"\t Date Naissance : " ;
        cin >> dateNaiss;
        cout <<"\t Filiere : " ;
        cin >> filiere;
        cout <<"\t Annee Etude : " ;
        cin  >> anneeEtude;

        etudiants[i] = Etudiant(nom, prenom, sexe, dateNaiss);
        inscriptions[i] = Inscription(etudiants[i], filiere, anneeEtude);
    }

    cout << "Voulez vous voir la liste de la IG en ordre alphabetique ?  (Oui = 1 / Non = 0) :" ;
    cin >> next;
    if(next == 1)
        Inscription::afficheIGalphabetique(inscriptions, n);

    //Inscription::afficheFilles2(inscriptions, n);

    cout << endl;

    return 0;
}
