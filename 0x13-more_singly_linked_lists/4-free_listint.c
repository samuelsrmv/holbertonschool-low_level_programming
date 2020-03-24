#include "lists.h"
/**
 * free_listint - free_listint
 * @head: pointers
 * Return: Value
 * Description: Fuction
 */
void free_listint(listint_t *head)
{
	listint_t *auxi;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		auxi = head->next;
		free(head);
		head = auxi;
	}
	free(head);
}
