#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *h;

	p = malloc(sizeof(dlistint_t));


	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	p->next = h;

	if (h != NULL)
		h->prev = p;

	*head = p;

	return (p);
}
