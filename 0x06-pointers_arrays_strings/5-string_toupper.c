#include "holberton.h"
/**
 * string_toupper - pointers
 * @src: pointers
 * Return: value
 */
char *string_toupper(char *src)
{
int i = 0;
while (src[i] != '\0')
{
if (src[i] >= 97 && src[i] <= 122)
{
src[i] = src[i] - 32;
}
i++;
}
return (src);
}
