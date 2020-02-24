#include "holberton.h"
/**
 * _memcpy - pointers
 * @dest: pointers
 * @src: pointers
 * @n: pointers
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;
for (c = 0; c < n; c++)
{
dest[c] = src[c];
}
return (dest);
}
