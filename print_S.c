#include "main.h"
/**
 * Print_S - print the S
 * @args: the argument
 * Return: num
 */

int Print_S(va_list args)
{
	char *x;
	int len = 0;
	int cont;
	int i = 0;

	x = va_arg(args, char *);
	if (x == NULL)
		x = "(NULL)";

	while (x[i] != '\0')
	{
		if (x[i] < 32 || x[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cont = x[i];
			if (cont < 16)
		{
				_putchar('0');
				len++;
			}
			len = len + print_X_S(cont);
		}
		else
		{
			_putchar(x[i]);
			len++;
		}
		i++;
	}
	return (len);
}
