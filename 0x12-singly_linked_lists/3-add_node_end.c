#include "lists.h"
/**
 * add_node_end - function
 * @head: pointr
 * @str: pointer
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	tmp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = _strlen(str);
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (*head);
}
/**
 * _strlen - function
 * @str: pointer
 * Return: int
 */
int _strlen(const char *str)
{
	int i;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
