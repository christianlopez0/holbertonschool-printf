#include "main.h"
#include <string.h>
/**
 *print_char - print a character
 *@c: the character that is going to print
 *Return: Return a 1 when is complete
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 *print_string - print a string
 *@str: the string that is going to print
 *Return: Return the lenght of the string
 */

int print_string(char *str)
{
	int lenght;

	if (str == NULL)
	{
		write(1, "(NULL)", 6);
		return (6);
	}
	lenght = strlen(str);
	write(1, str, lenght);
	return (lenght);
}
