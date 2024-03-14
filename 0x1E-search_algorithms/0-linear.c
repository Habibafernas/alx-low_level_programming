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
	size_t i, n = -1;
	
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			n = i;
			return (n);
		else
			printf ("Value checked array[%d] = [%d]", i, array[i])
	}
	if (n == -1)
	{
		return (-1);
	}
	n = -1;

}
