#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - concatenates n bytes of a string to another string
 * @nmemb: string to append to
 * @size: string to concatenate from
 *
 * Return: pointer to the resulting string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = 0;
	}
	return (p);
}
