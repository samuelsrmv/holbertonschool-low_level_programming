#include "holberton.h"
/**
 * reset_to_98 - pointers
 * @n: pointers
 * Return: void
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
