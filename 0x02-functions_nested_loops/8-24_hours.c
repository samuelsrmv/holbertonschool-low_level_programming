#include "holberton.h"
/**
 * void jack_bauer - print jack_bauer
 * @n: fuction
 * Return: value 0
 */
void jack_bauer(void)
{
int n1, n2, n, n4;
for (n1 = 0; n1 < 3; n1++)
{
for (n2 = 0; n2 < 9; n2++)
{
for (n3 = 0; n3 < 6; n3++)
{
for (n4 = 0; n4 < 10; n4++)
{
if (n1 == 2 && n2 > 2)
{
break;
}
else
{
_putchar(n1 + 48);
_putchar(n2 + 48);
_putchar(58);
_putchar(n3 + 48);
_putchar(n4 + 48);
_putchar('\n');
}
}
}
}
}
}
