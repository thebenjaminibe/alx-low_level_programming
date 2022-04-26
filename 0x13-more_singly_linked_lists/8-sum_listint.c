#include "lists.h"

/**
 * sum_listint - finds the sum of a list's items
 *
 *
 * @head: the head node
 *
 * Return: sum of list items. 0 when list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
