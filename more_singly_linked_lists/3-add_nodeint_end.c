#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL, *i = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = NULL;
		if (*head)
		{
			i = *head;
			while (i->next)
				i = i->next;
			i->next = newnode;
		} else
			*head = newnode;
	}
	return (newnode);
}
