#include "search_algos.h"
/**
 * linear_search - linear_search
 * @array: pointers
 * @size: size
 * @value: value
 * Return: macht
 * Description: Fuction
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
		for (size_t index = 0; index < size; index++)
		{
			printf("Value checked array[%ld] = [%d] \n", index, array[index]);
			if (array[index] == value)
			{
				return (index);
			}
		}
	return (-1);
}
