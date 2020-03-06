#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - array
 * @min: malloc
 * @max: malloc
 * Return: value
 */
int *array_range(int min, int max)
{
int x = 0;
int i;
int c = 0;
int *a;
if (min > max)
{
return (NULL);
}
x = max - min + 1;
a = malloc(x *sizeof(int));
if (a == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
a[c] = i;
c++;
}
return (a);
}
