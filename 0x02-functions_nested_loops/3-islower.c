/**
 * _islower - check the code
 *
 * Description : function that checks for lowercase character
 *
 * Return : Returns 1 if c is lowercase , Returns 0 otherwise
 */
int _islower(int c)
{
	int a = islower(c);
	if (a == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
