#include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @src : char
 * @dest : char
 * @n: number of bytes to copy
 * Return: return dest variable
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
