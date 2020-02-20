#include "holberton.h"
/**
 * _strcat - pointers
 * @dest: pointers
 * @src: pointers
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
int i;
int c;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (c = 0; src[c] != '\0'; c++)
;
for (j = i; j < (i + c); j++)
{
dest[j] = src[j - i];
}
return (dest);
}
