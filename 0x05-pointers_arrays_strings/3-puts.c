#include "main.h"

/**
 * _puts - prints string to std output
 * @str: string to be printed
 */
void _puts(char *str)
{
	int j;

	while (*(str + 1) != '\0')
	{
		_putchar(*(str + 1));
		i++;
	}
	_putchar('\n');
}
