#ifndef _MULTITHREADING_EPSI_SHIP_H_
#define _MULTITHREADING_EPSI_SHIP_H_

#include <vector>
#include <array>
#include <iostream>

class Ship {
public :
    //false = not hit, true = hit
    std::vector<bool> array;

    Ship() {
    };

    Ship(int length);

    std::string displayShip();
};


#endif //_MULTITHREADING_EPSI_SHIP_H_
