#include "holberton.h"
/**
 * swap_int - pointers
 * @a: pointers a
 * @b: pointers b
 * Return: void
 */
void swap_int(int *a, int *b)
{
int aux = *a;
(aux = *a);
(*a = *b);
(*b = aux);
}
