#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned int
 * @args: argument
 * Return: number of binary digits printed
 */

int print_binary(va_list args)
{
	int num_digits = 0;
	int is_start = 0;
	int i;
	unsigned int value = va_arg(args, unsigned int);
	unsigned int mask;

	int bit;
	for (i = 31; i >= 0; i--)
	{
		/*x = ((z << (32 - i)) & digit);*/
		/*if (x >> (31 - i))*/
			/*va1 = 1;*/
		mask = 1u << i;
		bit = (value & mask) ? 1 : 0;

		if (bit || is_start)
		{
			/*j = x >> (31 -i);*/
			_putchar(bit + '0');
			num_digits++;
			is_start = 1;
		}
	}

	if (num_digits == 0)
	{
		_putchar('0');
		num_digits++;
	}
	return (num_digits);
}
