#include "holberton.h"
/**
 * _strlen_recursion - pointer
 * @s: pointers
 * Return: value
 */
int _strlen_recursion(char *s)
{
int i;
if (*s != '\0')
{
(i = _strlen_recursion(s + 1));
i++;
}
return (i);
}
