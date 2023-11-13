#include "main.h"
/**
 * print_int_i - prints integer i
 * @arg: argument to print
 * Return: num of char
 */
int print_int_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int divisor = 1;

	/*n = n / 10;*/
	/*num = n;*/

	if (last < 0)
	{
		_putchar('_');
		num = -n;
		last = -last;
		i++;
	}
	else
	{
		num = n;
	}

	if (num != 0)
	{

	/*if (num > 0)*/
		/*int divisor = 1;*/

		while (num / divisor >= 10)
			divisor = divisor * 10;

		/*num = n;*/
		/*if (divisor != 0)*/

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
