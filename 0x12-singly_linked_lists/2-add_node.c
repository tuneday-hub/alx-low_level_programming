#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *another;
	size_t c = 0;

	another = malloc(sizeof(list_t));
	if (another == NULL)
		return (NULL);

	while (str[c])
		c++;

	another->str = strdup(str);
	another->len = c;
	another->next = *head;
	*head = another;

	return (*head);
}
