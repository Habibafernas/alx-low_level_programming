#include "main.h"
/**
 * print_last_digit - check the code
 *
 * Description : return last digit of n
 *
 * @n variable : n variable is integer
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0) 
	{
		return (-n % 10);
	}
	else
	{
		return (n % 10);
	}
}
