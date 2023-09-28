#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int r = 2, t = 0;

	for (i = 0; b[i] != '0' && b[i] != '1'; i++)
	{
		return (0);
	}
	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j] ; j++)
	{
		t += b[j] * r;
		r *= 2;
	}
	return (t);
}
