/**
 * _islower - variable
 *
 * Description : checking if char is lowercase or not
 *
 * Return : 1 if 'c' is lowercase and it reurns 0 otherwise
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
