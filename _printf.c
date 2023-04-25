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
	va_list args;
	int count = 0;
	char c;
	char str;

	count = _print_switch(format, args);
	va_end(args);
	return (count);
}
