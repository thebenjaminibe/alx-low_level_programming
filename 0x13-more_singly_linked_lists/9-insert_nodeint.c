#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 *
 * @head: head node
 * @idx: index to insert node at
 * @n: value of node
 *
 * Return: address of inserted node or NULL if insertion failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head, *new;

	if (head == NULL && idx == 0) /* list is currently empty, add head node */
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = NULL;
		(*head) = new;
		return (new);
	}

	while (current != NULL)
	{
		if (idx == 0) /* insert before head node */
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			new->next = current;
			(*head) = new;
			return (new);
		}

		if (i == (idx - 1))
		{
			return (insert_before(current, current->next, n));
		}
		else
		{
			++i;
			current = current->next;
		}
	}
	return (NULL);
}

/**
 * insert_before - inserts a node before another
 *
 * @before: parent node of current node
 * @current: the node that will be preceded by the new node
 * @value: value of the new node
 *
 * Return: inserted node if successful and NULL if insertion failed
 */
listint_t *insert_before(listint_t *before, listint_t *current, int value)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = value;
	tmp->next = current;
	before->next = tmp;
	return (tmp);
}
