#include "main.h"
/**
 * main - Entry point
 *
 * Description : prints all numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
