/**
 * main - Entry point
 *
 * Description : prints all numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
