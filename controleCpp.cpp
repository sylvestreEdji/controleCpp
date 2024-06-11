// controleCpp.cpp : définit le point d'entrée de l'application.
//

#include "controleCpp.h"

using namespace std;

void affiche() {
    std::cout << "\nMENU";
    std::cout << "\n\nOrdre\tSignification";
    std::cout << "\n======\t==============";
    std::cout << "\n\\a\t\tsonnerie ";
    std::cout << "\n\\b\t\tretour arrière";
    std::cout << "\n...\t\t...";
}

int menu() {
    int selection = 0;

    do {
        std::cout << "\n";
        std::cout << "\n1 - Emettre son";
        std::cout << "\n2 - Affichage ";
        std::cout << "\n3 - Quiiter";
        std::cout << "\n";
        std::cout << "\nEntrez votre choix : ";

        std::cin >> selection;
    } while (selection < 1 || selection > 3);

    return selection;
}
