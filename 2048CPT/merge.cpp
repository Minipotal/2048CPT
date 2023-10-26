#include "merge.h"

void merge::mergeDown{
    for (int i = 0; i < 4; i++) {
        if (grille[i][0] == grille[i][1]) {
            grille[i][1] += grille[i][0];
            grille[i][0] = 0;
        }
else if (grille[i][0] != grille[i][1]) {
       if (grille[i][1] == grille[i][2]) {
           grille[i][2] += grille[i][1];
       }
       else if (grille[i][1] != grille[i][2]) {
           if (grille[i][2] == grille[i][3]) {
               grille[i][3] += grille[i][2];
           }
       }
   }
}
}

/*
Si tableau[i][0] == tableau[i][1] || tableau[i][1] == 0
    Alors tableau[i][1] += tableau[i][0]
    tableau[i][0] = 0
    Si tableau[i][2] == tableau[i][3]
        Alors [tableau[i][3] += tableau[i][2]
        tableau[i][2] = 0
        i++
    Sinon
        i++
Sinon
    Si tableau[i][1]==tableau[i][2] || tableau[i][2]==0
        Alors tableau[i][2] += tableau[i][1]
        tableau[i][1] = 0
    Sinon Si tableau[i][2] == tableau[i][3]
        Alors tableau[i][3] += tableau[i][2]
        tableau[i][2] = 0
        i++



*/