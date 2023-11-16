#include "main.h"
/**
 * print_int_d - prints integer i
 * @args: argument to print
 * Return: num of char
 */
int print_int_d(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int digit, i = 0;
	/*last = n % 10, digit;*/
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		/*last = -n % 10;*/
		i++;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num / divisor >= 10)
		divisor = divisor * 10;

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num = num % divisor;
		divisor = divisor / 10;
		i++;
	}

	return (i);
}

/**
 * print_int_i - prints integer i
 * @args: argument to print
 * Return: num of char
 */
int print_int_i(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int digit, i = 0;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num / divisor >= 10)
		divisor = divisor * 10;

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num = num % divisor;
		divisor = divisor / 10;
		i++;
	}

	return (i);
}
