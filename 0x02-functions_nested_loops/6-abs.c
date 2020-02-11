#include "holberton.h"
/**
 * _abs - print abs
 * @n: fuction
 * Return: value 0
 */
int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
return (n);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
