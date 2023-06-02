#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding node.
 * @head: ponter to the next nod .
 * @str: filed of node.
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;

if (!new_node || !head)
return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(new_node->str);
}
if (node)
{
while (node->next)
node = node->next;
node->next = new_node;
}
else
*head = new_node;
return (new_node);
}
