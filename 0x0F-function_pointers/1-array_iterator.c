#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array_iterator
 * @array: pointers
 * @size: variable
 * @action: pointers
 * Return: Value
 * Description: Fuction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
