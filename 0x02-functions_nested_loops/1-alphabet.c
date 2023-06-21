#include "main.h"
/**
 * main - Entry point
 *
 * Description : function print_alphabet prints alphapet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
