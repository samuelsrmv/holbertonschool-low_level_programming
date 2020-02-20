#include "holberton.h"
/**
 * _strncpy - pointers
 * @dest: pointers
 * @src: pointers
 * @n: pointers
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int c;
for (i = 0; dest[i] != '\0'; i++)
;
for (c = 0; c < n && src[c] != '\0'; c++)
{
dest[c] = src[c];
}
for (; c < n; c++)
dest[c] = '\0';
return (dest);
}
