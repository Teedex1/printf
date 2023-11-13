#include "main.h"
/**
 * _strlen - Return the length of the string
 * @string: string
 * Return: 1
 */
int _strlen(char *string)
{
	int i;
	
	do
	{
		i++;
	}
	while (string[i] != '\0');
	return (i);
}
/**
 * _strlen - strlen function for constant char pointer string
 * @string: char pointer
 * Return: 1
 */
int _strlen_const(const char *string)
{
	int i;

	do
	{
		i++;
	}
	while (string[i] != '\0');
	return(i);
}
