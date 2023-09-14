#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	const unsigned int i, j;
	int result;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(list, int);
		printf("%d %s", result, separator);
	}
	va_end(list);
	printf("\n");
}
