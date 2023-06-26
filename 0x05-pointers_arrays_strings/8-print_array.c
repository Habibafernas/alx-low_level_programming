#include "main.h"

/**
 * print_array - prints the times table
 * @n: integer for which the times table will be printed
 *
 * @a : char variable
 * Description: prints the times table
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}


