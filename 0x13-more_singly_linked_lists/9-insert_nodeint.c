#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a given position in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data to be stored in the new node.
 *
 * Return: The address of the new node,
 * or NULL if it failed to add the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *current = *head;
listint_t *new_node;

/* Create the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

/* If the index is 0, the new node becomes the head */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* Traverse the list until the desired index */
while (current != NULL && count < idx - 1)
{
count++;
current = current->next;
}

/* If the index is out of range, free the new node and return NULL */
if (current == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node at the desired position */
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
