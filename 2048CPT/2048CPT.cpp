// 2048CPT.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>


int main() {

    // Création d'une grille vide
    // Déclaration d'un tableau à deux dimensions de taille 4x4
    char grille[4][4];

    // Remplissage la grille avec des espaces vides
    for (int ligne = 0; ligne < 4; ligne++) {
        for (int colonne = 0; colonne < 4; colonne++) {
            grille[ligne][colonne] = ' ';
        }
    }

    // Affiche de la grille avec des bordures
    for (int ligne = 0; ligne < 4; ligne++) {
        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "+---";
        }
        std::cout << "+" << std::endl;

        for (int colonne = 0; colonne < 4; colonne++) {
            std::cout << "| " << grille[ligne][colonne] << " ";
        }
        std::cout << "|" << std::endl;
    }
    // Fermeture de la grille
    for (int colonne = 0; colonne < 4; colonne++) {
        std::cout << "+---";
    }
    std::cout << "+" << std::endl;
}