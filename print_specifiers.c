#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
/**
 *printf_funcions -looks for the funcion to use
 *@s: is the character to know what funcion use
 *Return: Return the funcion to use or NULL
 */
int (*printf_funcions(char s))(va_list)
{
	speci get_spec[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 4)
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
 *@s: the string that is going to print
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

/**
 * print_int - print a integer
 * @d: integer to print
 * Return: return legth of integer
 */

int print_int(va_list args)
{
    int num = va_arg(args, int);

    char buffer[20];
    int length = 0;
    int d, j;

    if (num < 0) {
        write(1, "-", 1);
        num = -num;
        ++length;
    }

    do {
        buffer[length++] = '0' + num % 10;
        num /= 10;
    } while (num != 0);

    d = (buffer[0] == '-') ? 1 : 0;
    j = length - 1;

    while (d < j) {
        char temp = buffer[d];
        buffer[d++] = buffer[j];
        buffer[j--] = temp;
    }

    write(1, buffer, length);

    return length;
}

