#include "main.h"
/**
 * *_strchr - a function that locates a character in a string
 * @c: char
 * @s: pointer
 * Return: return c or NULL
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (c);
		}
		else
		{
			return (0);
		}
	}
}
