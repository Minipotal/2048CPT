#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "grille.h"

int grid[4][4];
Grille::Grille() {

}


void Grille::newGame() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            grid[i][j] = 0;
    addPieces();
}

std::pair<int, int> generateUnoccupiedPosition() {
    int occupied = 1, line, column;
    while (occupied) {
        line = rand() % 4;
        column = rand() % 4;
        if (grid[line][column] == 0)
            occupied = 0;
    }
    return std::make_pair(line, column);
}


void Grille::addPieces() {
    std::pair<int, int> pos = generateUnoccupiedPosition();
    grid[pos.first][pos.second] = 2;
}

void Grille::printUI() {
    system("cls");
    for (int i = 0; i < 4; i++) {
        std::cout << "+------+------+------+------+" << std::endl;
        for (int j = 0; j < 4; j++) {
            std::cout << "|";
            if (grid[i][j] == 0)
                std::cout << std::setw(6) << " ";
            else
                std::cout << std::setw(6) << grid[i][j];
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "+------+------+------+------+" << std::endl;
    std::cout << "n : nouvelle partie\nl : stopper le programme\nz, q, s et d : deplacement\n";
}