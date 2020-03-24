#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: pointers
 * Return: Value
 * Description: Fuction
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; head != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
