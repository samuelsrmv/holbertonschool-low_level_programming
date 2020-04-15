#include "lists.h"
/**
 *insert_nodeint_at_index - insert nodo in the index
 *@head: pointer
 *@idx: idx
 *@n: n
 *Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *con;
	unsigned int i = 0, j = 0;

	con = *head;

	while (con)
	{
		con = con->next;
		j++;
	}
	if (idx > j)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	while (i < idx - 1 && tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
