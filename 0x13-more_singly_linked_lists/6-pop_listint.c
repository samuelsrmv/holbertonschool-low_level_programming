#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: pointers
 * Return: Value
 * Description: Fuction
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	return (n);
}
