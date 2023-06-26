#include "main.h"
/**
 * puts2 - determine value of pointer
 * @str: char variable
 */
void puts2(char *str)
{
	char *ch = " ";

	int i, j;

	for (i = 0; i != '\0' && i % 2 == 0; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			ch[j] = str[i];
			j--;
			break;
		}
	}
	str = ch;
}
