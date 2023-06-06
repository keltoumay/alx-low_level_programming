#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current;

/* Traverse the list and free each node */
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}

/* Set the head to NULL */
*head = NULL;
}
