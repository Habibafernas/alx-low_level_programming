#include <stdlib.h>
#include "main.h"

/**
 * *array_range- concatenates n bytes of a string to another string
 * @min: string to append to
 * @max: string to concatenate from
 *
 * Return: pointer to the resulting string
 */
int *array_range(int min, int max)
{
	char *p, i;


	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max); i++)
	{
		p[i] = min++;
	}
}
