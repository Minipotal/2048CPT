#include "gameover.h"

int End::gameOver() {
	int i = 0;
	int temp = 0;
	int notOver = 0;
	for (int x = -1; x++; x < 4)
		for (int y = -1; y++; y < 4)
			if (i == grid[x][y])
				temp++;
	if (temp == 16)
		for (int x = -1; x++; x < 4)
			for (int y = -1; y++; y < 4)
				if (grid[x][y] == grid[x - 1][y] || grid[x][y - 1] || grid[x + 1][y] || grid[x][y + 1])
					int notOver += 1;
}