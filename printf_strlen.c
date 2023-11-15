#include "main.h"
/**
 * _strlen - Return the length of the string
 * @string: string
 * Return: 1
 */
int _strlen(char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
		;
	return (length);
}

	/*while (string[i] != '\0')*/
	/*{*/
	/*	i++;*/
	/*}*/
	/*return (i);*/
/**
 * _strlen_const - strlen function for constant char pointer string
 * @string: char pointer
 * Return: 1
 */
int _strlen_const(const char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
		;
	return (length);
}

	/*while (string[i] != '\0')*/
	/* {i++; }*/
