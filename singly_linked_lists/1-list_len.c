#include "lists.h"

/**
 * list_len - print all the elements of the list
 * @h: head
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i++);
}
