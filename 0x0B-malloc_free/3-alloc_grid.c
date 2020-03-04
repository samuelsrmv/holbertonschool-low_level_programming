#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - fuction
 * @width: width
 * @height: height
 * Return: value
 */
int **alloc_grid(int width, int height)
{
int **a;
int i;
int j;

if (width <= 0)
{
return (NULL);
}
if (height <= 0)
{
return (NULL);
}
a = malloc(height * sizeof(int *));
if (!a)
return (NULL);
for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(int));
if (a[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(a[j]);
}
free(a);
return (NULL);
}
for (j = 0; j < height; j++)
{
a[i][j] = 0;
}
}
return (a);
}
