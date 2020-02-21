#include "holberton.h"
/**
 * _strcmp - pointers
 * @s1: pointers
 * @s2: pointers
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
int i;
int e;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
e = 0;
}
else
{
e = s1[i] - s2[i];
break;
}
i++;
}
return (e);
}
