#include "lists.h"
/**
 * *add_nodeint - *add_nodeint
 * @head: pinters
 * @n: vari
 * Return: Value
 * Description: Fuction
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
	node->next = *head;
	}
	node->n = n;
	*head = node;
	return (*head);
}
