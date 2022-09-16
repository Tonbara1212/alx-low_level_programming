#include "main.h"

/**
 * _isdigit - checks if a character is a digit pr not
 * @c: character in question
 * Return: 1 if it is a digit, else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
