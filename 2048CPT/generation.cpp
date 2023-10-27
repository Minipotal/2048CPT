#include "generation.h"
#include <cstdlib>

void generation::randomTwo() {
	tempRandomX = rand() % 4;
	tempRandomY = rand() % 4;
	grid[tempRandomX][tempRandomY] = 2;
}

void generation::randomFour() {
	tempRandomX = rand() % 4;
	tempRandomY = rand() % 4;
	grid[tempRandomX][tempRandomY] = 4;
}