#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -  print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return multiplication of two numbers
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = (atoi(argv[1])) * (atoi(argv[2]));
		return (result);
	}
}
