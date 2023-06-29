#include"main.h"
/**
 * *_strncpy - prints the times table
 * @src: integer
 * @dest: integer
 * @n: integer
 *
 * Description: prints the times table
 * Return: return variable dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
