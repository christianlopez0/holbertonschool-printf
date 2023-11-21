#ifndef printf_H
#define printf_H
#include <stdarg.h>
#include <unistd.h>
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
int print_char(char c);
/**
 *print_string - funcion to print a string
 *@str: string to print
 *Return: Return the lenght of the string
 */
int print_string(char *str);
#endif
