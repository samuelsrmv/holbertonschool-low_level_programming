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

	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (x);
}
