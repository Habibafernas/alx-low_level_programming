#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, u = 0, t = 0;
	char *p;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
		p = malloc(sizeof(char) * (i + n + 1));
	else
		p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (u < i)
	{
		p[u] = s1[u];
		u++;
	}

	while (n < j && u < (i + n))
		p[u++] = s2[t++];

	while (n >= j && u < (i + j))
		p[u++] = s2[t++];

	p[u] = '\0';

	return (p);
}
