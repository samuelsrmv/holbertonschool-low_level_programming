#include "holberton.h"
/**
 * get_bit - get_bit
 * @n: pointers
 * @index: variable
 * Return: Value
 * Description: Fuction
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(n) * 8)
		return (-1);

	for (x = 0; x < index; x++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
