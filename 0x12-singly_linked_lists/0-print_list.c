#include "lists.h"
/**
 * print_list - print_list
 * @h: pinters
 * Return: Value
 * Description: Fuction
 */
size_t print_list(const list_t *h)
{
	int x;

	if (h != NULL)
	{
	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (x);
	}
return (0);
}
