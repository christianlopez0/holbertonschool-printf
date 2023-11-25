#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int (*printf_funcions(char s))(va_list)
{
    speci get_spec[] = {
        {"s", print_string},
        {"c", print_char},
        {NULL, NULL}
    };
    int i = 0;

    while (i < 2)
    {
        if (strcmp(&s, get_spec[i].letter) == 0)
        {
            return (get_spec[i].s);
        }
        i++;
    }
    return (NULL);
}
/**
 *print_char - print a character
 *@c: the character that is going to print
 *Return: Return a 1 when is complete
 */

int print_char(va_list c)
{
	char b = (char)(va_arg(c, int));
	write(1, &b, 1);
	return (1);
}

/**
 *print_string - print a string
 *@str: the string that is going to print
 *Return: Return the lenght of the string
 */

int print_string(va_list s)
{
	char *str = va_arg(s, char *);
	int lenght;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	lenght = strlen(str);
	write(1, str, lenght);
	return (lenght);
}
