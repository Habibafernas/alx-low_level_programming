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
	char a;

        for (n = 0; n <= 9; n++)
        {
                putchar(n);
        }
	for (a = 'a'; n <= 'f'; n++)
	{
		putchar(a);
	}
        putchar('\n');
        return (0);
}
