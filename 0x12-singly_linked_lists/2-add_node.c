#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node to linked list
 * @head: double pointer
 * @str: new string
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *het;
	unsigned int len = 0;

	while (str[len])
		len++;
	het = malloc(sizeof(list_t));
	if (!het)
		return (NULL);

	het->str = strdup(str);
	het->len = len;
	het->next = (*head);
	(*head) = het;

	return (*head);
}
