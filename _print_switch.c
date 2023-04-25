#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _print_switch - Select and print the corresponding format specifier
* @format: A string containing zero or more format specifiers
* @args: The va_list of arguments passed to _printf()
* Return: The total number of characters printed, excluding the null byte
*/
int _print_switch(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
		format++;
		switch (*format)
		{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				count += _printstr(va_arg(args, char *));
				break;
			case 'd':
			case 'i':
				count += _printint(va_arg(args, int));
				break;
			case '%':
				count += _putchar('%');
				break;
			case '\0':
				return (-1);
			default:
				count += _putchar('%');
				count += _putchar(*format);
				break;
		}
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
