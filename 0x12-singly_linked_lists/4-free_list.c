#include "lists.h"

/**
 * free_list - Frees memory used by a given list
 *
 * @head: head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}