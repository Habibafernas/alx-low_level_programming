#include "main.h"
/**
 * print_diagonal - check the code
 *
 * Description : function that draws a diagonal line on the terminal.
 *
 * @n variable : n is an integer
 *
 * Return: Always (0)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
