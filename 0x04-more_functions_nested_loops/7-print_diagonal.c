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
	if (n <= 0)
	{
		_putchar('\n')
	}
	while (n != 0 && n > 0)
	{
		_putchar('\\');
		n--
	}
	_putchar('\n');
}
