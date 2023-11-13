#include "main.h"

/**
 * print_s - print a string
 * @args: argument
 * Return: length of the string
 */
int print_s(va_list args)
{
	char *string;
	int i;
	int len;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(NULL)";
		len = _strlen(string);
		for (i = 0; i < len; i++)
			_putchar(string[i]);
	}
	
	i = 0;
	
	while (i < len)

	{
		_putchar(string[i]);
		i++;
	}
	return (len);
}
					
