#include "holberton.h"
/**
 * clear_bit - clear_bit
 * @n: pointers
 * @index: variable
 * Return: Value
 * Description: Fuction
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
	{
		return (-1);
	}
	*n = (*n & ~(1 << index));
return (1);
}
