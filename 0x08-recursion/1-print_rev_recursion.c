#include "holberton.h"
/**
 * _print_rev_recursion - pointer
 * @s: pointers
 * Return: value
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
_print_rev_recursion(s + 1);
{
_putchar(*s);
}
}
