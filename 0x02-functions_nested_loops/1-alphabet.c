#include "main.h"
/**
 * main - check the code
 *
 * Description : ("function print_alphabet that prints the alphabet, in lowercase")
 *
 * Return: Always 0.
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
