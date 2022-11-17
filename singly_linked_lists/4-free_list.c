#include "lists.h"

/**
 *free_list - free the lists
 *@head: pointer to head
 *
 *Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp, *i = head;

	for (; i != NULL;)
	{
		tmp = i;
		i = i->next;
		free(tmp->str);
		free(tmp);
	}
}
