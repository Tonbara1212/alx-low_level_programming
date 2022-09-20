#include "main.h"

/**
 * print_rev - prints string reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int spn = 0, index;

	while (s[index++])
		spn++;

	for (index = spn - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
