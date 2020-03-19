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

	if (h == NULL)
		return (0);
	for (x = 0; h->next != '\0'; x++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (x);
}
