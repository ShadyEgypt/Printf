#include "main.h"
#include <stdarg.h>


/**
 * _printf - Custom implementation of printf function
 * @format: A string containing the format specifier and output string
 *
 * Return: Number of characters printed
 */
int _printf0(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format_specifier(args, format);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
