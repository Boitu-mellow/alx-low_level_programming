#include "main.h"

/**
 * _islower - checks for lowercasw
 * @c: the character to be checked
 * Return: 1 for lowercase, 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
