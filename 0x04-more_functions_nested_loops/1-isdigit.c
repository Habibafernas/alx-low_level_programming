#include "main.h"
/**
 *  _isdigit - check the code
 *
 * Description : checking if 'c' isa digit or not 
 *
 * @c variable : c variable is values fron ASCII Code
 *
 * Return: 1 if 'c' if a digit and  0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
