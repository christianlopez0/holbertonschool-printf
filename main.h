#ifndef printf_H
#define printf_H
#include <stdarg.h>
typedef struct specifiers
{
char *letter;
int (*s)(va_list);
} speci;

/**
 * printF_funcions - is a pointer to the diferent funcions
*/
int (*printf_funcions(char c))(va_list);
/**
 *_printf - funcion that is a copy of printf
 *@format: the string to print
 *Return: Return the number of character printed
 */
int _printf(const char *format, ...);
/**
 *print_char - funcion to print a character
 *@c: the character to print
 *Return: Return 1
 */
int print_char(va_list c);
/**
 *print_string - funcion to print a string
 *@str: string to print
 *Return: Return the lenght of the string
 */
int print_string(va_list s);
/**
 *print_int - funcion to print a integer
 *@i - integer to print
 *Return: Return the lenght of the integer
 */
int print_int(va_list d);
#endif
