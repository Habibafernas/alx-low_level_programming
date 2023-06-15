#include <stdio.h>
/*
 * main - Entry point
 * return: Always 0 (success)
 * */
int main(void)
{
	printf(" short int is %2d bytes \n", sizeof(short int));
        printf(" int is %2d bytes \n", sizeof(int));
	printf(" int * is %2d bytes \n", sizeof(int *));
	printf(" long int is %2d bytes \n", sizeof(long int));
	printf(" long int * is %2d bytes \n", sizeof(long int *));
	return (0);
}
