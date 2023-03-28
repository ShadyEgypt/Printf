#include "main.h"

/**
 * p_str - print a string
 * @args: va_list of arguments for format specifier
 * Return: Number of characters printed
 */

int p_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		_putchar(*s++);
	}
	return (_strlen(s));
}
