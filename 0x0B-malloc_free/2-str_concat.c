#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - array
 * @s1: pointers
 * @s2: pointers
 * Return: value
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *a;
int x;
int j;
int e;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (x = 0; s2[x] != '\0'; x++)
{
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
for (e = 0; e < x; e++)
{
a[e + j] = s1[j] + s2[e];
}
a[e + j] = '\0';
return (a);
free(a);
}
