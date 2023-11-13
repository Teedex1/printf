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
		{"%c", print_char_c}
	};

	va_list args;
	int i = 0, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
here:
	while (format[i] != '\0')
	{
		int z = 0;

		while (z < 3)
		{
			if (f[z].any_char[0] == format[i] && f[z].any_char[1] == format[i + 1])
			{
				length = length + f[z].f(args);
				i = i + 2;
				goto here;
			}
			z++;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
