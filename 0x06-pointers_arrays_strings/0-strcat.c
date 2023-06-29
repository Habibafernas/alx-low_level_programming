#include "main.h"

/**
 * *_strcat - prints the times table
 * @dest: char variable
 * @src: char rvariable
 *
 * Description: function that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
