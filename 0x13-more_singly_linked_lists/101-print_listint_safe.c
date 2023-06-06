#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;

slow = head;
fast = head;

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

/* Check if there's a loop */
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
printf("Loop detected, exiting...\n");
exit(98);
}

printf("[%p] %d\n", (void *)slow, slow->n);
count++;
}

return (count);
}
