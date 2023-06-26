#include "main.h"
/**
 * rev_string - draws a diagonal line on the terminal
 * @s: number of times the character \ should be printed
 */
void rev_string(char *s)
{
	size_t i;

	for (i = 0; i != strlen(s); i++)
	{
		s[i] = (s[((strlen(s) - 1) - i)]);
	}
}
