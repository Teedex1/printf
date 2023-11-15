#include "main.h"
/**
 * print_octa - the function that print the octa value
 * @args: the parameter
 * Return: the oct
 */
int print_octa(va_list args)
{
	int digit = 0, i;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;
	unsigned int tempCopy = num;
	unsigned int octalDigit;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (tempCopy != 0)
	{
		tempCopy = tempCopy / 8;
		digit++;
	}

	for (i = digit - 1; i >= 0; i--)
	{
		octalDigit = (temp >> (i * 3)) & 7;
		_putchar(octalDigit + '0');
	}
	return (digit);
}
