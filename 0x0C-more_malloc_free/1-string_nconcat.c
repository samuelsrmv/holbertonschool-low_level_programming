#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - array
 * @s1: pointers
 * @s2: pointers
 * @n: Variable
  * Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, j, e, d, m;
	char *a;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (x = 0; s2[x] != '\0'; x++)
	if (x < n)
	{
		d++;
	}
	a = malloc((i + x + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = s1[j];
	}
	m = 0;
	for (e = 0; e < n; e++)
	{
		a[e + j] = s2[m];
		m++;
}
	a[e + j] = '\0';
	return (a);
	free(a);
}
