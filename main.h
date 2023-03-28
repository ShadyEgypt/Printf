#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _strlen(char *s);
int _putchar(char c);
int p_addr(va_list args);
int p_char(va_list args);
int p_str(va_list args);
int p_int(va_list args);
int p_dec(va_list args);
int p_uint(va_list args);
int p_uint8(va_list args);
int p_uint16(va_list args);
int handle_format_specifier(va_list args, const char *format);
int p_reverse(void);
int _printf(const char *format, ...);
#endif