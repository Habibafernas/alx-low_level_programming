#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description : prints if the n is greater than 5, less than 6 or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n % 10;
	if (l >= 6 )
	{
	printf("Last digit of %d is %d and is greater than 5\n", n,l);
	}
	else if (l <=5 && l =! 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,l);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n,l);
	}
	return (0);
}
