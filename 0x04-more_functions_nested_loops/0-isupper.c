#include "main.h"

/**
 * _isupper - checks character
 * @c: character to be checked
 * Return: returns 1 if uppercase, elso 0
 */

int _isupper (int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
