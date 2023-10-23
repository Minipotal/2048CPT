// 2048CPT.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <vector>
#include <string>

int main() {
    // Création d'une grille vide de 4x4
    std::vector<std::vector<std::string>> grille(4, std::vector<std::string>(4, ""));

    // Remplissage de la grille avec des chaînes de caractères
    grille[2][2] = "2048";

    // Affichage de la grille avec des bordures
    for (int ligne = 0; ligne < 4; ligne++) {
        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "+--------";
        }
        std::cout << "+" << std::endl;

        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "| " << grille[ligne][colonne];
            // Remplir les espaces pour que la cellule fasse 7 caractères
            for (int i = grille[ligne][colonne].length(); i < 7; i++) {
                std::cout << " ";
            }
        }
        std::cout << "|" << std::endl;
    }

    // Fermeture de la grille
    for (int colonne = 0; colonne < 4; colonne++) {
        std::cout << "+--------";
    }
    std::cout << "+" << std::endl;

    return 0;
}