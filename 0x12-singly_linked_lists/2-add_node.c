#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding nodes.
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: size of list.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head;

/* Allocate memory for the new node*/
new_head = malloc(sizeof(list_t));
if (new_head == NULL)
return (NULL);

/* Duplicate the string and assign it to the new node*/
new_head->str = strdup(str);
if (new_head->str == NULL)
{
free(new_head);
return (NULL);
}

/* Set the length of the string*/
new_head->len = strlen(str);

/* Set the next pointer of the new node to the current head*/
new_head->next = *head;

/* Update the head pointer to point to the new node*/
*head = new_head;

return (new_head);
}
