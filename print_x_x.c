#include "main.h"
/**
 * print_x_x - to print the x value
 * @num: parameter
 * Return: x values
 */
int print_x_x(unsigned long int num)
{
	long int digit = 0;
	unsigned long int rem;

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
