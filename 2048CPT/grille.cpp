#include <iostream>
#include <vector>
#include <string>

#include "grille.h"



Grille::Grille() : grid(4, std::vector<std::string>(4, "")) {
    grid[2][2] = "2048";
}

void Grille::afficher() {
    for (int ligne = 0; ligne < 4; ligne++) {
        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "+--------";
        }
        std::cout << "+" << std::endl;

        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "| " << grid[ligne][colonne];

            for (int i = grid[ligne][colonne].length(); i < 7; i++) {
                std::cout << " ";
            }
        }
        std::cout << "|" << std::endl;
    }

    for (int colonne = 0; colonne < 4; colonne++) {
        std::cout << "+--------";
    }
    std::cout << "+" << std::endl;
}