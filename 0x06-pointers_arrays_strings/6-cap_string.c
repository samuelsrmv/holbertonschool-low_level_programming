#include "holberton.h"
/**
 * cap_string - pointers
 * @src: pointers
 * Return: value
 */
char *cap_string(char *src)
{
int i = 0;
if (src[0] >= 97 && src[0] <= 122)
{
src[0] = src[0] - 32;
}
while (src[i] != '\0')
{
if (src[i] == 44 || src[i] == 59 || src[i] == 46 ||
src[i] == 33 || src[i] == 63 || src[i] == 34 ||
src[i] == 40 || src[i] == 41 || src[i] == 123 ||
src[i] == 125 || src[i] == 9 || src[i] == 32
|| src[i] == 10)
{
if (src[i + 1] >= 97 && src[i + 1] <= 122)
{
src[i + 1] = src[i + 1] - 32;
}
}
i++;
}
return (src);
}
