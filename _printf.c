#include "main.h"
/**
  *_printf - printf funtion thaat print all things with some fuetures
  *@format: the string || format +sting
  *Return: count
  */
int _printf(const char *format, ...)
{
	int i, count = 0, buflong = 0, counted = 0;
	va_list args;
	char buffer[BUFFSIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += _printstr(buffer, &buflong);
			i++;
			counted = _handlagrs(format, &i, args, buffer);
			if (counted == -1)
			{
				return (-1);
			}
			count += counted;

		}
		else
		{
			buffer[buflong++] = format[i];
			if (buflong == BUFFSIZE)
			{
				count += _printstr(buffer, &buflong);
			}
		}
		i++;
	}
	count += _printstr(buffer, &buflong);
	va_end(args);
	return (count);
}
