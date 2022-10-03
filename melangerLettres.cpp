#include "melangerLettres.hpp"
#include <iostream>
#include <string>
using namespace std;

void melangerLettres(string *mot) {

    string melange;
    int position(0);
    
    std::cout << *mot << endl;

    while (mot->size() != 0) {
        position = rand() % mot->size();
        melange += mot->at(position);
        mot->erase(position, 1);
    }

    *mot = melange;
}
