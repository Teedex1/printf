#include "main.h"
/**
 * print_int_i - prints integer i
 * @arg: argument to print
 * Return: num of char
 */
int print_int_i(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		int divisor = 1;

		while (num / divisor >= 10)
			divisor = divisor * 10;

		num = n;
		while (divisor > 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num = num % divisor;
			divisor = divisor / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
