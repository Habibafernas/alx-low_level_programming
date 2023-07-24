#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a program that prints all arguments it receives.
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array (Success), NULL (Error)
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
	n = i + j + 2;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < u)
		{
			p[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (n - 2))
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}
