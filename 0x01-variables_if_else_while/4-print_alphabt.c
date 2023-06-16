/**
 * main - Entry point
 *
 * Description : prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e')
		{
			continue;
		}
		else if (n == 'q')
		{
			continue;
		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
