#include "main.h"
/**
 * print_rev - Entry point
 *
 * Description : Write a function that prints a string, in reverse
 *
 * @s : char variable
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[((strlen(s) - 1) - i)]);
	}
	_putchar('\n');
}
