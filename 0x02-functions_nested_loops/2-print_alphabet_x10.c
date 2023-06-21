#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Description : prints all alphabet 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
