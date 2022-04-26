#include "lists.h"

/**
 * get_nodeint_at_index - gets node at a given index in a list
 *
 * @head: the head node
 * @index: index of node
 *
 * Return: the node at the given index, else NULL if index is not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i != index)
		{
			current = current->next;
			++i;
		}
		else
		{
			return (current);
		}
	}

	return (NULL);
}
