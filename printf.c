#include "main.h"
/**
 * _printf - the printf function
 * @format: the function format
 *
 * Return: 1
 */

int _printf(const char *format, ...)
{
	format_info f[] = {
		{"%c", print_char_c},
		{"%s", print_s},
		{"%%", print_percentage_sign},
		{"%d", print_int_i},
		{"%i", print_int_d},
		{"%b", print_binary},
		{"%u", print_int_unsigned},
	};

	va_list args;
	int i = 0, length = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		/*if (format[i] != '\0')*/
		size_t z = 0;

		while (z < sizeof(f) / sizeof(f[0]))
		{
			if (f[z].any_char[0] == format[i] && f[z].any_char[1] == format[i + 1])
			{
				length = length + f[z].f(args);
				i = i + 2;
				break;
			}
			z++;
		}
			if (z == sizeof(f) / sizeof(f[0]))
			{
				_putchar(format[i]);
				i++;
				length++;
			}
		}


	va_end(args);
	return (length);
}
