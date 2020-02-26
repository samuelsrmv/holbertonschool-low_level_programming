#include "holberton.h"
/**
 * factorial - pointer
 * @n: pointers
 * Return: value
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
if (n > 0)
{
return (n * (factorial(n - 1)));
}
return (0);
}
