#include "holberton.h"
/**
 * print_rev - pointers
 * Return: value 0
 * @s: pointers
 */
void print_rev(char *s)
{
int i;
int b;
i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (b = i; b != -1; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}

