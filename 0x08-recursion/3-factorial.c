#include "main.h"
#include <stdlib.h>
/**
 * factorial(int n) - a program that prints all arguments it receives.
 * @n: size of the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
	{
		return (factorial(n - 1) * n );
	}
}
