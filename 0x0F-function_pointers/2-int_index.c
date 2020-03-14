#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - int_index
 * @array: pointers
 * @size: variable
 * @cmp: pointers
 * Return: Value
 * Description: Fuction
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}