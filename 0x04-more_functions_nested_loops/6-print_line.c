#include "main.h"
/**
 * print_line - check the code
 *
 * Description : function that draws a straight line in the terminal
 *
 * @n : n is an integer
 *
 * Return: Always (0)
 */
void print_line(int n)
{
	if (n == 0 || n <= 0)
	{
		_putchar('\n');
	}
	while (n != 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
