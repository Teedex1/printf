#include "main.h"
/**
 * print_x - to print the x value
 * @args: parameter
 * Return: x values
 */
int print_x(va_list args)
{
	int digit = 0;
	int i;
	int rem;
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		rem = num % 16;

		if (rem < 10)
			buffer[digit++] = rem + '0';
		else
			buffer[digit++] = rem + 'a' - 10;

		num = num / 16;
	}

	for (i = 0; i < 8 - digit; i++)
		_putchar('0');

	for (i = digit - 1; i >= 0; --i)
		_putchar(buffer[i]);

	return (8);
}
