#include "lists.h"
/**
 * listint_len - listint_len
 * @h: pinters
 * Return: Value
 * Description: Fuction
 */
size_t listint_len(const listint_t *h)
{
	int x;

	if (h == NULL)
	{
		return (0);
	}
	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
