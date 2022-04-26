#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * and returns the head node's data
 *
 * @head: head node of the list
 *
 * Return: the value of the removed head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = NULL;
		data = (*head)->n;
		free((*head));
		(*head) = tmp;

		return (data);
	}

	return (0);
}
