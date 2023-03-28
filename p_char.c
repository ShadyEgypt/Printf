#include "main.h"
#include <stdarg.h>

/**
 * p_char - print char format specifier
 * @args: va_list of arguments for format specifier
 *
 * Return: Number of characters printed
 */
int p_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}
