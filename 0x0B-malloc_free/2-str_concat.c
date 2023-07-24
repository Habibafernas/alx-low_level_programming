#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: the first array
 * @s2: the second array
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, u = 0, t = 0;
	int n;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	n = i + j + 1;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (u < i)
		{
			p[u] = s1[u];
			u++;
		}
	}
	if (s2)
	{
		while (u < (n - 2))
		{
			p[u] = s2[t];
			u++;
			t++;
		}
	}
	p[u] = '\0';
	return (p);
}
