#include "main.h"

/**
 * print_s - print a string
 * @arg: argument
 * Return: length of the string
 */
int print_s(va_list arg)
{
	char *string;
	int i;
	int len;

	string = va_arg(arg, char *);
	if (string == NULL)
	{
		string = "(NULL)";
	}
	len = _strlen(string);
	
	for (i = 0; i < len; i++)
		_putchar(string[i]);

	/*else*/
	/*{*/
	/*	len = _strlen(string);*/
		/*for (i = 0; i < len; i++)*/
		/*	_putchar(string[i]);*/
	return (len);
}
