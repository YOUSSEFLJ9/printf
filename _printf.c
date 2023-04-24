#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *_printf - this function represents the function printf (still a small part)
  *@format: string entered(const)
  *Return: he number of characters printed (excluding the null byte)
  */
int _printf(const char *format, ...)
{
	va_list argms;
	int counter = 0;
	char c;
	size_t lnstring;

	va_start(argms, format);
	while ((c = *format++) != '\0')
	{
		if (c == '%')
		{
			switch (*format++)
			{
			case 'c':
				_putchar(va_arg(argms, int));
				counter++;
				break;
			case '%':
				_putchar('%');
				counter++;
				break;
			case 's':
				lnstring = _printstr(va_arg(argms, const char *));
				counter += lnstring;
				break;
			}
		}
		else
		{
			_putchar(c);
			counter++;
		}
	}
	va_end(argms);
	return (counter);
}
