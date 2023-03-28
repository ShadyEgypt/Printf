#include "main.h"
#include <stdarg.h>

/**
 * handle_format_specifier - Handle format specifier character
 * @args: va_list of arguments for format specifier
 * @format: Pointer to format specifier character
 *
 * Return: Number of characters printed
 */
int handle_format_specifier(va_list args, const char *format)
{
	int count = 0;

	if (*format == 'c')
		count += p_char(args);
	else if (*format == 's')
		count += p_str(args);
	else if (*format == '%')
	{
		_putchar('%');
		count++;
	}
	else
	{
		_putchar('%');
		_putchar(*format);
		count += 2;
	}

	return count;
}
