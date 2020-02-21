#include "holberton.h"
/**
 * reverse_array - pointers
 * @a: pointers
 * @n: pointers
 * Return: value
 */
void reverse_array(int *a, int n)
{
int i, j, k;
int aux[1024];
k = n - 1;
for (i = 0; i < n; i++)
{
aux[i] = a[k];
k--;
}
for (j = 0; j < n; j++)
{
a[j] = aux[j];
}
}
