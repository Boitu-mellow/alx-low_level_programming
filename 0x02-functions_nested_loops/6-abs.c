#include "main.h"

/**
 * _abs - computing the absolute value of an integer
 * @n: n is an integer to be checked
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
