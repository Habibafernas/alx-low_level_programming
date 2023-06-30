#include"main.h"
/**
 * reverse_array - check the code
 *
 * Description :  a function that reverses the content of an array of integers.
 *
 * @a variable : a integer variable
 *
 * @n variable : n integer variable
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
