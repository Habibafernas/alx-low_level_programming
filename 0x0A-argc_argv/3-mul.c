#include "main.h"
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
	result = atoi(argv[1]) * atoi(argv[2]);
	return (result);
}
