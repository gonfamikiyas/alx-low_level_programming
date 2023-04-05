#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @index: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; current && i < index; i++)
	{
		if (i == index - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		else
			current = current->next;
	}

	return (NULL);
}
