#include "holberton.h"
/**
 * _strncat - pointers
 * @dest: pointers
 * @src: pointers
 * @n: pointers
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j + i] = src[j];
}
return (dest);
}
