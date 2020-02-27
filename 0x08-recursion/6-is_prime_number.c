#include "holberton.h"
int isprimeAux(int n2, int x);
/**
 * is_prime_number - fuction
 * @n: value input
 * Return: value
 */
int is_prime_number(int n)
{
if (n <= 0)
{
return (0);
}
else
{
return (isprimeAux(n, n - 1));
}
}
/**
 * isprimeAux - Function
 * @n2: parameter
 * @x: parameter
 * Return: value
 */
int isprimeAux(int n2, int x)
{
if (x == 2)
return (1);
if (x <= 1)
return (0);
if (n2 % x == 0)
{
return (0);
}
else
{
return (isprimeAux(n2, x - 1));
}
}
