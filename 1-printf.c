#include "main.h"
#include <stdarg.h>


/**
 * _printf - Custom implementation of printf function
 * @format: A string containing the format specifier and output string
 *
 * Return: Number of characters printed
 */
int _printf1(const char *format, ...)
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

	if (*format == 'd' || *format == 'i')
		count += handle_integer(args);
	else
	{
		_putchar('%');
		_putchar(*format);
		count += 2;
	}

	return (count);
}


/**
 * handle_integer - Handle integer format specifier
 * @args: va_list of arguments for format specifier
 *
 * Return: Number of characters printed
 */
int handle_integer(va_list args)
{
	int num = va_arg(args, int);

	p_int(num);
	return (get_integer_length(num));
}


/**
 * p_int - print an integer
 * @n: the integer to print
 */

void p_int(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		p_int(num / 10);
	}

	_putchar(num % 10 + '0');
}


/**
 * get_integer_length - count num of digits
 * @num: the number we need to find its len
 *
 * Return: len of int
 */
int get_integer_length(int num)
{
	int length = 0;

	if (num == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}
