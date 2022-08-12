#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list_t list
 * @str: String to be added to the list_t list
 * Return: The address of the new element if successful, else, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newList;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newList);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newList->str = dup;
	newList->len = len;
	newList->next = *head;

	*head = newList;

	return (newList);
}
