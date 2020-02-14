#include "holberton.h"
/**
 * print_diagonal - print line diagonal
 * Return: value 0
 * @n: fuction
 */
void print_diagonal(int n)
{
int x;
int i;
if (n <= 0)
_putchar('\n');
for (x = 0; x < n; x++)
{
for (i = 0; i < x; i++)
{
if (n > 0)
{
_putchar(' ');
}
}
_putchar(92);
_putchar('\n');
}
}

