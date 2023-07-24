#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - a function that returns a pointer to a newly allocated space
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while ((p[i] = str[i]) != '\0')
		i++;
	return (p);
}
