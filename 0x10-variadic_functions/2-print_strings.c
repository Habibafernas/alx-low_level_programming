#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%s", va_arg(list, char *));
		}
		else if (!va_arg(list, char *))
		{
			printf("nil");
		}
		else if (separator && i == 0)
		{
			printf("%s", va_arg(list, char *));
		}
		else
		{
			printf("%s%s", separator, va_arg(list, char *));
		}
	}
	printf("\n");

	va_end(list);
}
