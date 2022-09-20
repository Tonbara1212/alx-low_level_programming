#include "main.h"

/**
 * _puts - prints string to std output
 * @str: string to be printed
 */
void _puts(char *str)
{
	int j;

	while (*(str + 1))
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
