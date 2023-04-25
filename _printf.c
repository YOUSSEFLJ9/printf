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
	char *str;

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
				str = va_arg(argms, char *);
				if (str == NULL)
				{
					_printstr("(null)");
					counter += 6;
				}
				else
					counter += _printstr(str);
				break;
			case 'd':
			case 'i':
			  counter += _printint(argms);
			  break;
			default:
			  _putchar(*format);
			  counter++;
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
/**
 * _printint - prints an integer
 * @n: the integer to print
 * Return: the number of characters printed.
 */
int _printint(int n)
{
  int i, sign, counter = 0;
  char digits[10];
  sign = (n < 0) ? -1 : 1;
  i = 0;
  do
    {
    digits[i++] = (char)((n % 10) * sign + '0');
    n /= 10;
    }
  while (n != 0);
  if (sign < 0)
    digits[i++] = '-';
  while (i-- > 0)
    {
      _putchar(digits[i]);
      counter++;
    }
  return (counter);
}
