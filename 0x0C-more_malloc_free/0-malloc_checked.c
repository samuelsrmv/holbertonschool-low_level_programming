#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - array
 * @b: Malloc
 * Return: value
 */
void *malloc_checked(unsigned int b)
{
unsigned int **c;

c = malloc(b * sizeof(unsigned int));
if (c == NULL)
{
exit(98);
}
return (c);
}
