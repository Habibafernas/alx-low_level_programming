/**
 * _isalpha - check the code
 *
 * Description : checking if 'c' is alphabit or uppercase
 *
 * @c variable : c variable is values fron ASCII Code
 *
 * Return: 1 if 'c' is alphabit and 0 otherwise
 */
int _isalpha(int c)
{
	if (132 >= c >= 41 && 61 >= c >= 172)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
