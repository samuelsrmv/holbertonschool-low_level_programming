#include "holberton.h"
/**
 * print_sign - print sing
 * @n: fuction
 *Return: value 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
return (0);
}
