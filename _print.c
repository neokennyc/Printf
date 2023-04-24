#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int print_length;
	va_list args;
int (*output)(va_list);
const char *f;
char s;
int i = 0;

	va_start(args, format);
	print_length = 0;
	if (!format)
		return (-1);

    while (*format != '\0') {
        if (*format == '%') 
	{
            format++;

while (1)
{
	s = format[i];
	if (s == 's' || s == 'd' || s == 'i' || s == 'x' || s == 'X' || s == 'o' || s == 'f')
	{
		break;
	}
	i++;

}
if (s == 'x' || s == 'X')
{
	print_length++;
}

f = format;
output = select_output(*format);
if (output)
{
	print_length += output(args);
}
else
{
	writeout(*format);                     print_length++;
}
	}
	else 
	{
        writeout(*format);
           print_length++;
        }
        format++;
    }
	va_end(args);
	/*putchar('\n');*/
	return (print_length);
}
