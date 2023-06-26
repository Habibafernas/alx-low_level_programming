#include "main.h"
/**
 * swap_int - determine value of pointer
 * @a: integer variable
 * @b: integer variable
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
