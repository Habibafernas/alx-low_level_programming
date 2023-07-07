#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: integer for which the times table will be printed
 *
 * Description: prints the times table
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
