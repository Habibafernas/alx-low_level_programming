#include "search_algos.h"

/**
 * linear_search - searches for a value in an array 
 *
 * @array: input array
 * @size: size 
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		else
			printf ("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
