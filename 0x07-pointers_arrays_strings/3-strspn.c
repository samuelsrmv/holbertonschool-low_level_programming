#include "holberton.h"
/**
 * *_strspn - pointer
 * @s: pointers
 * @accept: pointers
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
int k = 0, m = 0;
int c = 0, b = 0;
while (s[k] != '\0')
{
m = 0;
b = 1;
while (accept[m] != '\0')
{
if (s[k] == accept[m])
{
c++;
b = 0;
}
m++;
}
if (b == 1)
break;
k++;
}
return (c);
}
