#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - array
 * @height: variable
 * @grid: pointers
 * Return: value
 */
void free_grid(int **grid, int height)
{
int c;

for (c = 0; c < height; c++)
{
free(grid[c]);
}
free(grid);
}
