#include "lists.h"
/**
 * free_listint2 - free_listint2
 * @head: pointers
 * Return: Value
 * Description: Fuction
 */
void free_listint2(listint_t **head)
{
	listint_t *auxi;


	if (head == NULL || *head == NULL)
	{
		return;
	}

	while ((*head)->next != NULL)
	{
		auxi = (*head)->next;
		free(*head);
		*head = auxi;
	}
	free(*head);
	*head = NULL;
}
