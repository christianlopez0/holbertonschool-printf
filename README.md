# holbertonschool-printf

## Project Specifications

### Compiler:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style.

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

## Function prototypes

int _printf(const char *format, ...);

int print_char(va_list args);

int print_string(va_list args);

int print_int(va_list args);

The **conversion specifier:**


The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following:

**i,d:**	   integer to be provided for printing.

**c:**	   character to be provided for printing

**s:**	  string to be provided for printing.

**%:**	    A per cent sign '%' is written. No argument is converted.

**Return value:**

The funcion return the number of characters printed (excluding the null byte)
If an output error is encountered return a -1.

___

## Author
##### Morris Castro
##### Christian Lopez 

