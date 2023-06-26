#include "main.h"
/**
 * rev_string - draws a diagonal line on the terminal
 * @s: number of times the character \ should be printed
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = (s[((strlen(s) - 1) - i)]);
	}
}
