#include "main.h"
/**
 * print_x - to print the x value
 * @args: parameter
 * Return: x values
 */
int print_x(va_list args)
{
	int digit = 0;
	int rem;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		rem = num % 16;

		if (rem < 10)
			_putchar(rem + '0');
		else
			_putchar(rem + 'a' - 10);

		num = num / 16;
		digit++;
	}
	return (digit);
}
