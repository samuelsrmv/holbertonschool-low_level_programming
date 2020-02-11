#include "holberton.h"
/**
 * print_last_digit(int) - print the last digit
 * @n: fuction
 * Return: value 0
 */
int print_last_digit(int n)
{
n = (n % 10);
if (n < 0)
{
n = n * (-1);
}
_putchar(n + 48);
return (n);
}
