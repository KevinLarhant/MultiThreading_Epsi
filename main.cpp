#include <iostream>
#include "Board.h"

using namespace std;

int main() {
    using namespace std;

    cout << "Bonjour, bienvenue dans ???:\n";

    cout << "Veuillez entrez un nom de joueur : ";
    string nom_joueur;
    cin >> nom_joueur;

    Board board = Board(nom_joueur);

    return 0;
}