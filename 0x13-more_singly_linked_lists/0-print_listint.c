#include "lists.h"

/**
 * print_listint - prints all the elements of linked ls
 * @h: linked list of the type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
num++;
}
return (num);
}
