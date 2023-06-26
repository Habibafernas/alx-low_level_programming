/**
 * main - Entry point
 *
 * Description : prints all numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int i;
	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[((sizeof(s) - 1) - i)]);
	}
	_putchar('\n');
}
