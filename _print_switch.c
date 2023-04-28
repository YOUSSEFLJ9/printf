#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _print_switch - Select and print the corresponding format specifier
* @format: A string containing zero or more format specifiers
* Return: The total number of characters printed, excluding the null byte
*/
int _print_switch(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;
	char *str;

	va_start(args, format);
	while ((c = *format++) != '\0')
	{
		if (c == '%')
		{
		switch (*format++)
		{
			case 'c':
				 _putchar(va_arg(args, int));
				 count++;
				break;
			case 's':
				str = (va_arg(args, char *));
				if (str == NULL)
					count += _printstr("(NULL)");
				else
					count += _printstr(str);
				break;
			case 'd':
			case 'i':
				count++;
				_printint(va_arg(args, int));
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case '\0':
				return (-1);
		}
		}
		else
		{
			_putchar(c);
			count++;
		}
	}
	va_end(args);
	return (count);
}
