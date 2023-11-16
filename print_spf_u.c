#include "main.h"
/**
 * print_int_unsigned - prints integer i
 * @args: argument to print
 * Return: num of char
 */
int print_int_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int length = 0;
	unsigned int divisor = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (divisor <= num / 10)

		divisor = divisor * 10;

	while (divisor > 0)
	{
		_putchar((num / divisor) + '0');
		num = num % divisor;
		divisor = divisor / 10;
		length++;
	}

	return (length);
}
