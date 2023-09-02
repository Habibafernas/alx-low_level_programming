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
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		return (result);
	}
}
