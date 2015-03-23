#include <iostream>
#include "Board.h"
#include "Ship.h"

//a board of 1 player

Ship shipList[3];
int board[10][10];

Board::Board(std::string name) {
    std::cout << "\nboard de " + name + "\n";

    Ship ship0 = Ship(5);
    shipList[0] = ship0;

    Ship ship1 = Ship(2);
    shipList[1] = ship1;

    Ship ship2 = Ship(3);
    shipList[2] = ship2;

    std::cout << "\nShips inserted\n";

    for (int i = 0; i < 3; i++) {
        std::cout << "Ship " << i << " : ";
        std::cout << shipList[i].displayShip();
    }
}
