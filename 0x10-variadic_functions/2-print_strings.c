#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	str = va_arg(list, char *);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%s", va_arg(list, char *));
		}
		if (!(va_arg(list, char *)))
		{
			str = "nil";
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");

	va_end(list);
}
