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
	int (*f)();
} format_info;
int _putchar(char c);
int print_char_c(va_list char_args);
int _printf(const char *format, ...);
int print_s(va_list arg);
int _strlen(char *string);
int _strlen_const(const char *string);
int print_percentage_sign(va_list args);
int print_int_i(va_list args);
int print_int_d(va_list args);
int print_binary(va_list args);
int print_int_unsigned(va_list args);
int print_octa(va_list args);
int print_X(va_list args);
int print_x(va_list args);
int Print_S(va_list args);
int print_X_S(unsigned int num);
int print_p(va_list args);
int print_x_x(unsigned long int num);

#endif
