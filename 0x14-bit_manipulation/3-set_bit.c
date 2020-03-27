#include "holberton.h"
/**
 * set_bit - set_bit
 * @n: pointers
 * @index: variable
 * Return: Value
 * Description: Fuction
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	*n = (*n | 1 << index);

	return (1);
}
