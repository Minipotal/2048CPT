#include "grille.h"
#include "move.h"

Movement::Movement() {

}
Grille gr;


bool canDoMove(int line, int column, int nextLine, int nextColumn) {
    if (nextLine < 0 || nextColumn < 0 || nextLine >= 4 || nextColumn >= 4 || grid[line][column] != grid[nextLine][nextColumn] && grid[nextLine][nextColumn] != 0)
        return false;
    return true;
}



void Movement::applyMove(int direction) {
    int dirLine[] = { 1, 0,-1, 0 };
    int dirColumn[] = { 0, 1, 0, -1 };;

    int startLine = 0, startColumn = 0, lineStep = 1, columnStep = 1;
    if (direction == 0) {
        startLine = 3;
        lineStep = -1;
    }
    if (direction == 1) {
        startColumn = 3;
        columnStep = -1;
    }
    int movePossible, canAddPiece = 0;
    do {
        movePossible = 0;
        for (int i = startLine; i >= 0 && i < 4; i += lineStep)
            for (int j = startColumn; j >= 0 && j < 4; j += columnStep) {
                int nextI = i + dirLine[direction], nextJ = j + dirColumn[direction];
                if (grid[i][j] && canDoMove(i, j, nextI, nextJ)) {
                    grid[nextI][nextJ] += grid[i][j];
                    grid[i][j] = 0;
                    movePossible = canAddPiece = 1;
                }
            }
        gr.printUI();
    } while (movePossible);
    if (canAddPiece)
        gr.addPieces();
}

void Movement::checkOver() {
    int temp;
    int notOver;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (grid[i][j] == 0);
                temp = temp + 1;
    if (temp == 16)
        for (int i = 0; i++; i < 4)
            for (int j = 0; j++; j < 4)
                if (grid[i][j] == grid[i + 1][j] || grid[i - 1][j] || grid[i][j + 1] || grid[i][j - 1])
                    notOver = notOver + 1;
}
