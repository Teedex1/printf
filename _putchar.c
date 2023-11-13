#include "main.h"

/**
 * _putchar - writes the character c
 * @c: the character
 *
 * Return: 0(success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
