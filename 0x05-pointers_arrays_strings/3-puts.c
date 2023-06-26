#include "main.h"
/**
 * _puts - Entry point
 *
 * Description : Write a function that prints a string, followed by a new line
 *
 * @str : char variable
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
