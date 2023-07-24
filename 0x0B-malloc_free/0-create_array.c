#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a program that prints all arguments it receives.
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	int *p
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);

}
