#include "holberton.h"
/**
 * binary_to_uint - binary_to_uint
 * @b: pointers
 * Return: Value
 * Description: Fuction
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int x = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x] != '\0')
	{
		if (b[x] != '1' && b[x] != '0')
		{
			return (0);
		}
		sum = sum << 1;
		if (b[x] == '1')
		{
			sum = sum ^ 1;
		}

		x++;
	}
	return (sum);
}
