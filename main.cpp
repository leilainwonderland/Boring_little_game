#include "melangerLettres.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  string motMystere, motUtilisateur;
  string *motMelange(nullptr);

  cout << "Joueur 1: Saisissez un mot à l’abri des regards : ";
  cin >> motMystere;

  motMelange = new string (motMystere);

  melangerLettres(motMelange);

  while (motUtilisateur != motMystere) {
    cout << "Joueur 2: Essayer de trouver le mot mystère : ";
    cin >> motUtilisateur;
  }

  cout << "Quel est ce mot ? " << *motMelange << endl;
  cin >> motUtilisateur;

  if (motUtilisateur == motMystere) {
    cout << "Bravo" << endl;
  } else {
    cout << "ce n'est pas le bon mot !" << endl;
  }

  delete motMelange;
  motMelange = nullptr;
}