#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "grille.h"
#include "move.h"

int main()
{
    char commandToDir[128]{};
    commandToDir['s'] = 0;
    commandToDir['d'] = 1;
    commandToDir['z'] = 2;
    commandToDir['q'] = 3;
    Grille g;
    Movement m;
    g.newGame();
    while (true) {
        g.printUI();
        char command;
        std::cin >> command;
        if (command == 'n')
            g.newGame();
        else if (command == 'l')
            break;
        else {
            int currentDirection = commandToDir[command];
            m.applyMove(currentDirection);
            m.checkOver();
        }
    }
    return 0;
}