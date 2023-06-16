/**
 * main - Entry point
 *
 * Description : prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main (void)
{
	char n;
	for(n = 'a'; n <= 'z' && n != 'q' && n != 'e'; n++)
	{
		putchar(n);

	}
	n++;
	continue;
	putchar('\n');
	return (0);
}
