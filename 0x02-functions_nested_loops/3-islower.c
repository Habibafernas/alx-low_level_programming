/*
 * _islower - Entry Point
 *
 * Description : function checks for lowercase character of 'c' values
 *
 * Return : if 'c' is lowercase it returns 1 otherwise it reurns 0.
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
