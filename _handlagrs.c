#include "main.h"
/**
  *_handlagrs - this function handl the cases after %.
  *
  *@format: the format from the _printf
  *@i: counter of loop in _printf function
  *@args: args list.
  *@buffer: is the stirng to be handl
  *Return: the lenght printed on success or -1 if null byte
  */
int _handlagrs(const char *format, int *i, va_list args, char *buffer)

{
	int k = 0, lenused;
	specifier speci[] = {
		{'c', _putchar},
		{'s', _strcase},
		{'%', _prcntcase},
		{'\0', NULL}
	};

	while (speci[k].c != '\0')
	{
		if (format[*i] == speci[k].c)
		{
		return (speci[k].func(args, buffer));
		}
		k++;
	}

	/*if (variabletype[k].c == '\0')*/
	lenused = 0;

	if (format[*i] != '\0')
	{
		lenused = lenused + write(MYSTDOUT_FILENO, "%%", 1);
		if (format[*i - 1] == ' ')
		{
			lenused += write(MYSTDOUT_FILENO, " ", 1);
		}
		lenused += write(MYSTDOUT_FILENO, &format[*i], 1);
	}
	else
	{
		if (speci[k].c == '\0')
			return (-1);
	}
	return (lenused);
}
