#include "lists.h"

/**
 * add_node - add a node to the list
 *@str: string to be added
 *@head: pointer to head of string
 *
 * Return: 0 on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
