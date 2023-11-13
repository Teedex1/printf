#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

typedef struct specifierInfo
{
	char *any_char;
	int (*f)(va_list);
} format_info;
int _putchar(char c);
int print_char_c(va_list char_args);
int _printf(const char *format, ...);
int print_s(va_list arg);
int _strlen(char *string);
int _strlen_const(const char *string);
int print_percentage_sign(va_list args);
int print_int_i(va_list arg);
int print_int_d(va_list args);


#endif
