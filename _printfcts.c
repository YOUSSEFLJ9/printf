#include "main.h"

/**
  *_printstr - this fuction print the strng given
  *@buffer: string to be print
  *@buflong: the lenght of the string
  *Return: the counter of the chars printed
  */
int _printstr(char *buffer, int *buflong)
{
	int count = 0;

	if (*buflong > 0)
	{
		write(MYSTDOUT_FILENO, &buffer[0], *buflong);
	}
	count = *buflong;
	*buflong = 0;
	return (count);
}
/**
 * print_string - Prints a string
 * @args: The arguments list
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);

    if (!str)
        str = "(null)";

    return (_putstr(str));
}
