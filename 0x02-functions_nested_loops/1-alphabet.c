#include "main.h"
/**
 * print_alphabet - check the code
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
