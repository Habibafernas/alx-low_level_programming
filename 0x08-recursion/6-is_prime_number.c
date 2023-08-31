#include "main.h"
#include <stdlib.h>
/**
 * is_prime_number - a program that prints all arguments it receives.
 * @n: size of the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
