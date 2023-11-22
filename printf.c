#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd':
                case 'i':
                    printf("%d", va_arg(args, int));
                    break;
                case 's':
                    printf("%s", va_arg(args, char *));
                    break;

                default:
                    putchar('%');
                    break;
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
    return 0; 
}

int main() {
    int num = 42;
    char str[] = "Hello!";

    _printf("This is a number: %i, and this is a string: %s\n", num, str);

    return 0;
}
