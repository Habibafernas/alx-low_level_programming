#include "main.h"

/**
 * puts_half - prints the times table
 * @str: integer for which the times table will be printed
 *
 * Description: prints the times table
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}
	return (*s);
}
