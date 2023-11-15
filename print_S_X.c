#include "main.h"
/**
 * print_X_S - print the unsigned int
 * @num: parameter
 * Return: X values
 */
int print_X_S(unsigned int num)
{
	int digit = 0;
	int rem;

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
			_putchar(rem + 'A' - 10);

		num = num / 16;
		digit++;
	}
	return (digit);
}
