/**
 * main - Entry point
 *
 * Description : rints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	char n;

	for(n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
