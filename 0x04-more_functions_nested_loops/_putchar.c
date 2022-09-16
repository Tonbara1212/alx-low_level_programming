#include <unistd.h>
#include "main.h"

/**
 * _putchar - wriyes character to std output
 * @c: character to print
 * Return: on success 1, and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
