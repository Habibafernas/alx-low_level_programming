#include "main.h"
#include <stdlib.h>
/**
 * _sqrt_recursion - a program that prints all arguments it receives.
 * @n: size of the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt(n));
}
