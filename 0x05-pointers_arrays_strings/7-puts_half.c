#include "main.h"

/**
 * puts_half - prints the times table
 * @str: integer for which the times table will be printed
 *
 * Description: prints the times table
 */
void puts_half(char *str)
{
	char *ch;
	int i, n, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}
	if (len % 2 != 0)
	{
		for (n = (((len + 1) / 2) - 1); str[n] != '\0'; n--)
		{
			*ch = str[n];
		}
	}
	else
	{
		for (n = (((len) / 2) + 1); str[n] != '\0'; n--)
		{
			*ch = str[n];

		}
	}
}
