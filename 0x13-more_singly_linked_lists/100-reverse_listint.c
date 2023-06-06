#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
/* Store the next node */
next = current->next;
/* Reverse the link */
current->next = prev;

/* Move the pointers one position ahead */
prev = current;
current = next;
}

/* Update the head to point to the new first node */
*head = prev;

return (*head);
}
