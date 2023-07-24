#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a program that prints all arguments it receives.
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **p;
	int i, j;

	p = (int **) malloc (sizeof(* int) * height)
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width)
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
	}


}
