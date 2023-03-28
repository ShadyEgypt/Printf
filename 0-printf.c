#include "main.h"
#include <stdarg.h>


/**
 * _printf - Custom implementation of printf function
 * @format: A string containing the format specifier and output string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
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
		count += handle_char(args);
	else if (*format == 's')
		count += handle_string(args);
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

	return (count);
}



/**
 * handle_char - Handle char format specifier
 * @args: va_list of arguments for format specifier
 *
 * Return: Number of characters printed
 */
int handle_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}



/**
 * handle_string - Handle string format specifier
 * @args: va_list of arguments for format specifier
 *
 * Return: Number of characters printed
 */
int handle_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	p_str(s);
	return (_strlen(s));
}



/**
 * p_str - print a string
 * @s: the string to print
 */

void p_str(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}
