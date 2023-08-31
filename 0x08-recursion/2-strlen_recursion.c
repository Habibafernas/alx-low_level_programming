#include "main.h"
#include <stdlib.h>
/**
 * _strlen_recursion - a program that prints all arguments it receives.
 * @s: size of the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	for (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i + 1);
}
