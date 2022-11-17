#include "lists.h"

/**
 * add_node_end - add a new node to the end of the list.
 * @head: head.
 * @str: string .
 *
 *Return: the address of the new element or null if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;

	if (tmp == NULL)
		*head = new;
	else
	{
		for (; tmp->next != NULL; tmp = tmp->next)
			continue;

		tmp->next = new;
	}
	return (new);
}
