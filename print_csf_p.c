#include "main.h"
/**
 * print_p - to print the pointer
 * @args: arguments
 * Return: the pointer
 */
int print_p(va_list args)
{
	void *p;
	char *s = "(nil)";
	int i = 0, z = 0;
	unsigned long int j;

	p = va_arg(args, void*);

	if (p == NULL)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}

	j = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	z = print_x_x(j);

	return (i + z + 2);
}

