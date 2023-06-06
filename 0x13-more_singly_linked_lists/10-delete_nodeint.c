#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * a given index in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *current, *temp;

if (*head == NULL)
return (-1);

/* If index is 0, delete the first node */
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;

/* Traverse the list until the node before the desired index */
while (current != NULL && count < index - 1)
{
count++;
current = current->next;
}

/* If index is out of range or the next node is NULL, return -1 */
if (current == NULL || current->next == NULL)
return (-1);

/* Delete the node at the desired index */
temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}
