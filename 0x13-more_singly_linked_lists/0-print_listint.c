#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;

/* Traverse the list until the end (NULL) is reached */
while (h != NULL)
{
/* Print the value of the current node */
printf("%d\n", h->n);

/* Move to the next node */
h = h->next;

/* Increment the count of nodes */
count++;
}

/* Return the number of nodes */
return (count);
}
