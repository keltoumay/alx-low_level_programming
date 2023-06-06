#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
return (0);

/* Store the data of the head node */
data = (*head)->n;

/* Update the head to point to the next node */
temp = *head;
*head = (*head)->next;

/* Free the memory of the original head node */
free(temp);

/* Return the data of the original head node */
return (data);
}
