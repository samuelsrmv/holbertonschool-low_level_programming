#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - array
 * @str: pointers
 * Return: value
 */
char *_strdup(char *str);
{
int i;
char *a;
int x;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
a = malloc(i * sizeof(char) + 1);
if (a == NULL)
{
return (NULL);
}
for (x = 0; x < i + 1; x++)
{
a[x] = str[x];
}
return (a);
}

