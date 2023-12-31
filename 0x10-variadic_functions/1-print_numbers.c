#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(list, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
		result = va_arg(list, int);
		printf("%s%d", separator, result);
		}
	}
	va_end(list);
	printf("\n");
}
