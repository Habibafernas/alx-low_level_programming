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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);}
}
