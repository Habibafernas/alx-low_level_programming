/**
 * main - Entry point
 *
 * Description : prints all the alphabets in lowercase then in uppercase
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	char n, N;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (N = 'A'; N <= 'Z'; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
