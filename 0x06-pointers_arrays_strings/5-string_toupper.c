#include "main.h"
/**
 * *string_toupper - check the code
 *
 * Description : a function that changes all lowercase letters to uppercase.
 *
 * @s : integer variable
 * Return: 1 if 'c' is lowercase and 0 otherwise
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

	}
	return (s);
}
