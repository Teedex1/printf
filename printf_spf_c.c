#include "main.h"
/**
 * print_char_c - prints a character c
 * @char_args: arguments
 * Return: 1
 */
int print_char_c(va_list char_args)
{
	char specifier;

	specifier = va_arg(char_args, int);
	_putchar(specifier);
	return (1);
}
