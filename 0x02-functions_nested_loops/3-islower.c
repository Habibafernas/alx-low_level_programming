/**
 * _islower - check the code
 *
 * Description : checking if 'c' is lowercase or uppercase
 *
 * @c variable : c variable is values fron ASCII Code
 *
 * Return: 1 if 'c' is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
