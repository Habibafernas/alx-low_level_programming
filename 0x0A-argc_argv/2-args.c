#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always returns (0)
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s",argv[i]);
		return (0);
	}
}