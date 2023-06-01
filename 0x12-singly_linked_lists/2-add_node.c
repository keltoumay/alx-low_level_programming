#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

/* Allocate memory for the new node*/
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the string and assign it to the new node*/
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* Set the length of the string*/
new_node->len = strlen(str);

/* Set the next pointer of the new node to the current head*/
new_node->next = *head;

/* Update the head pointer to point to the new node*/
*head = new_node;

return (new_node);
}
