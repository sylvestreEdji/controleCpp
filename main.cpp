#include <iostream>
#include "controleCpp.h"

int main() {


    int choix = 0;

    while (choix != QUIT) {
        choix = menu();

        if (choix == 1)
            std::cout << "\nAvez-vous entendu ce son ?????\a\a\a";
        else if (choix == 2)
            affiche();
    }

    std::cout << "Vous quittez l'application!\n";
    return 0;
}