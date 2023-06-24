#include "main.h"
/**
 * print_square - check the code
 *
 * Description : function that prints a square, followed by a new line
 *
 * @size variable : size is the size of the square
 *
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, i;

		for (i = 0; i < size; i++)
			{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			}
	}
}
