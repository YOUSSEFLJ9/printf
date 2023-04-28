#include "main.h"
/**
 *_putchar - writes the character c
 *@args: The list of args
 *@buffer: number in array to print
 * Return: On success 1.
 */
int _putchar(va_list args, char *buffer)
{
	int c = va_arg(args, int);

	buffer[0] = c;
	buffer[1] = '\0';

	return (write(MYSTDOUT_FILENO, buffer, 1));
}
