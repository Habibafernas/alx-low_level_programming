#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int r, t;

	if (b == NULL)
        {
                return (0);
        }
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (r = 1, t = 0, j--; j >= 0; j--, r *= 2)
	{
		if (b[j] == '1')
		{
			t += r;
		}
	}
	return (t);
}
