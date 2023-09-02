#include <stdio.h>
#include "main.h"

/**
 * main - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int main(argc, *argv[])
{
	int i = 0;
	int add = argv[i];

	if argc == 1
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (0 =< argv[i] =< 9)
		{
			add += argv[i];
			printf ("%d\n", add); 
		}
	}
	return (0);
}
