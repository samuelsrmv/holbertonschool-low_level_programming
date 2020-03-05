#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - array
 * @nmemb: malloc
 * @size: malloc
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		a[i] = 0;
return (a);
}
