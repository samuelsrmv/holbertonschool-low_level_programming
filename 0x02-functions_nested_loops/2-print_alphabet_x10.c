#include "holberton.h"
/**
 * print_alphabet - coment
 * Return: value 0
 */
void print_alphabet(void)
{
char c;
int i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
