#include "holberton.h"
/**
 * _strlen - pointers
 * @s: pointers
 * Return: value 0
 */
void print_rev(char *s)
{
int b;
for (b = 62; s[b] != '\0'; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
