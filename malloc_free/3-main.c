#include "main.h"
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the 2-dimentional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
	w = 0;
	while (w < width)
	{
	printf("%d ", grid[h][w]);
	w++;
	}
	printf("\n");
	h++;
	}
}


/**
 * main - checks the code
 *
 *
 *
 * Return: (0)
 */



int main(void)
{
	int **grid;
	int i;
	
	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
	return (1);
	}
	
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);


	for (i = 0; i < 4; i++)
	{
	free(grid[i]);
	}
	free(grid);
	return (0);
}
