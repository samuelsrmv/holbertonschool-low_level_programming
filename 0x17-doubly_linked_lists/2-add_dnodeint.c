#include "lists.h"

/**
 * add_dnodeint - Return size of list
 * @n: head of node
 * @head: head of node
 * Return: count of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node_samu;
node_samu = malloc(sizeof(dlistint_t));
if (node_samu == NULL)
{
printf("Error: Can't malloc\n");
return (NULL);
}
node_samu->n = n;
node_samu->prev = NULL;
node_samu->next = *head;
*head = node_samu;
return (node_samu);
}
