#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _strlen(char *s);
int _putchar(char c);
void p_addr(void *p);
void p_str(char *s);
int p_int(va_list args);
int p_dec(va_list args);
void p_uint(unsigned int n);
void p_uint8(unsigned int n);
void p_uint16(unsigned int n, int uppercase);
int handle_format_specifier(va_list args, const char *format);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_unsigned_integer(va_list args);
int handle_octal(va_list args);
int handle_hexadecimal(va_list args, int num);
int handle_pointer(va_list args);
int handle_reverse(void);
int get_integer_length(int num);
int get_unsigned_integer_length(unsigned int num);
int _printf(const char *format, ...);
#endif
