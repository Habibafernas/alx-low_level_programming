/**
 * print_sign - check the code
 *
 * Description : checking if 'n' is negative,positive or zero
 *
 * @n variable : n variable is integer
 *
 * Return: 1 if 'c' is lowercase and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	else 
	{
		_putchar(0);
		return (0);
	}
}
