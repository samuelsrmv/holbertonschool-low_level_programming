#include "lists.h"
/**
 * list_len - list_len
 * @h: pointer
 * Return: Value
 * Description: Fuction
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
