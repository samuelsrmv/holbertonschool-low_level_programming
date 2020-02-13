#include "holberton.h"
/**
 * more_numbers - print alphabet
 * Return: value 0
 */
void more_numbers(void)
{
int c;
int i;
for (i = 0; i <= 9; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar ((c / 10) + 48);
}
_putchar ((c % 10) + 48);
{
}
}
_putchar('\n');
}
}
