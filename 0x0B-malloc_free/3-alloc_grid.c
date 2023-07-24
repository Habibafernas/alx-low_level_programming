#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - a program that prints all arguments it receives.
 * @width: size of the array
 * @height: height of the array
 * Return: Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int *p;
	int i, j;

	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; j++)
				free(p[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
