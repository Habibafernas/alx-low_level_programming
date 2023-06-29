#include "main.h"

/**
 ** _strncat - a function that concatenates two strings
 * @str: integer variable
 * @dest: int variable
 * n: integer variable
 * Description: prints the times table
 */
char *_strncat(char *dest, char *src, int n)
{
	int i , j;

	i=0;
	j=0;

	while(dest[i] != '\0')
		i++
	while(src != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
