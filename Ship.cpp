#include "Ship.h"

//false = not hit, true = hit
//std::vector<bool> Ship::array;

Ship::Ship(int length) {
    for (int i = 0; i < length; ++i) {
        this->array.push_back(false);
    }
    std::cout << "\nship created";
}

std::string Ship::displayShip() {
    std::string str = "";

    str += "Affichage du Ship : ";

    for (int i = 0; i < this->array.size(); i++) {
        str += this->array[i] ? 1 : 0;
        str += ". ";
    }
    str += "\n";

    return str;
}