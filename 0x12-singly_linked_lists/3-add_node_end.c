#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *may;
	list_t *met = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	may = malloc(sizeof(list_t));
	if (!may)
		return (NULL);
	may->str = strdup(str);
	may->len = len;
	may->next = NULL;

	if (*head == NULL)
	{
		*head = may;
		return (may);
	}

	while (met->next)
		met = met->next;
	met->next = may;
	return (may);
}
