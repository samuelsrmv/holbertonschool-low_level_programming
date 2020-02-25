#include "holberton.h"
/**
 * _strpbrk - pointers
 * @s: pointers
 * @accept: pointers
 * Return: value
 */
char *_strpbrk(char *s, char *accept)
{
int k = 0, m = 0;
int b = 0, e = 0;
while (s[k] != '\0')
{
m = 0;
b = 1;
while (accept[m] != '\0')
{
if (s[k] == accept[m])
{
b = 0;
e = k;
}
m++;
if (b == 0)
return (&s[e]);
}
k++;
}
return ('\0');
}
