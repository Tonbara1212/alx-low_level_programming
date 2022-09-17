#include "main.h"

/**
 * print_triangle - prints triangle with #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x, index;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (index = size - x; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < x; index++)
				_putchar('#');

			if (x == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
