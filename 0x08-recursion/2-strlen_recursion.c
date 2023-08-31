#include "main.h"
#include <stdlib.h>
/**
 * _strlen_recursion - a program that prints all arguments it receives.
 * @s: size of the array
 * Return: pointer to the array (Success), NULL (Error)
 */
int _strlen_recursion(char *s)
{
	return (1 +  _strlen_recursion(s + 1));
}
