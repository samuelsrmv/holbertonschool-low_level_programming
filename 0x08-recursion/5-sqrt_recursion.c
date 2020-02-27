#include "holberton.h"
int _funcAux(int n2, int x2);
/**
 * _sqrt_recursion - fuction
 * @n: variable
 * Return: value
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_funcAux(n, 1));
/**
 * _funcAux - Function
 * @n2: variable
 * @x2: variable
 * Return: value
 */
int _funcAux(int n2, int x2)
{
if (x2 > n2)
return (-1);
if (x2 * x2 == n2)
return (x2);
else
return (_funcAux(n2, x2 + 1));
}
