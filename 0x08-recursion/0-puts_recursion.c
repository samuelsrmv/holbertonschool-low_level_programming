#include "holberton.h"
/**
 * _puts_recursion - pointer
 * @s: pointers
 * Return: value
 */
void _puts_recursion(char *s)
{
int v = 0;
if (s[v] != '\0')
{
_putchar(s[v]);
v++;
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
