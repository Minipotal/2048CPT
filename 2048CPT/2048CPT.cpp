#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "grille.h"
#include "move.h"


/*bool isGameOver(int grid[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int current = grid[i][j];
            if (i > 0 && grid[i - 1][j] == current)
                return false;
            if (j > 0 && grid[i][j - 1] == current)
                return false;
            if (i < 3 && grid[i + 1][j] == current)
                return false;
            if (j < 3 && grid[i][j + 1] == current)
                return false;
        }
    }
    return true;
}
*/
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
        }
    }
    return 0;
}