#include "lists.h"

/**
 * free_dlistint - free of list
 * @head: head of node
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp_node = NULL;
while (head != NULL)
{
temp_node = head->next;
head = temp_node;
free(head);
}
}
