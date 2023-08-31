#include "main.h"
#include <stdlib.h>
/**
 * _pow_recursion - a program that prints all arguments it receives.
 * @x: size of the array
 * @y: char to initialize the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
