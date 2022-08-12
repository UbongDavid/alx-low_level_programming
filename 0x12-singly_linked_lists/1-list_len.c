#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: The linked list_t list.
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t numOfElements = 0;

	while (h)
	{
		numOfElements++;
		h = h->next;
	}

	return (numOfElements);
}
