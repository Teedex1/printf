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
	char buffer[20];
	int i;

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

	for (i = digit - 1; i >= 0; --i)
		_putchar(buffer[i]);

	return (digit);
}
