#include "lists.h"
/**
 * *add_node - *add_node
 * @head: pointer
 * @str: pointer
 * Return: Value
 * Description: Fuction
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
		newnode->next = *head;
	else
		newnode->next = *head;
	newnode->str = strdup(str);
	newnode->len = large(str);
	*head = newnode;
	return (*head);
}

/**
 * large - large
 * @str: String
 * Return: large of string
 */
int large(const char *str)
{

	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
