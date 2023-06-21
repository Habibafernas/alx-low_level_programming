#include "main.h"
/**
 * print_sign - check the code
 *
 * Description : checking if 'n' is negative,positive or zero
 *
 * @n variable : n variable is integer
 *
 * Return: 1 if 'c' is lowercase and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
