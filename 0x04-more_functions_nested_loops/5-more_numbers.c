#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: nothing
 */

void print_diagonal(int n)
{
	int len, int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_puthar(' ');
			}
			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}

			_putchar('\');
		}
	}
	_putchar('\n'
			}
