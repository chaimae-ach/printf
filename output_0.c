#include"main.h"
/**
 * _printf-print function for a formatted text
 *
 * @format:format specifier
 * Return : no of bytes printed
 */
int _printf(const char *format, ...)
 {
            unsigned int i, count = 0;

	    va_list args;

	    va_start(args,format);
	    if (!format ||(format[0] == ' ٪ ' && format [1] == '\0' ))
		    return (-1);
	    for (i = 0; format[i] != '\0'; i++)
}
