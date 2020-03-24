#include "lists.h"
/**
 * print_listint - print_listint
 * @h: pointers
 * Return: Value
 * Description: Fuction
 */
size_t print_listint(const listint_t *h)
{
	int x;

	if (h == NULL)
	{
		return (0);
	}

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
return (x);
}
