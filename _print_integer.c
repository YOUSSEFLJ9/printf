#include "main.h"
/**
 *_writenum - this function write the number in buffer
 *@negat: a check if the number is negative
 *@i: sing on the number starts on the buffer
 *@buffer: string of digit be printed
 *Return: the number of char printed
 */
int _writenum(char *buffer, int negat, int i)
{
	char sign = '\0';
	int len = BUFFSIZE - i - 1;

	if (negat != 0)
	{
		sign = '-';
		len++;
	}
	if (sign)
		buffer[--i] = sign;
	return (write(MYSTDOUT_FILENO, &buffer[i], len));

}

/**
 * _print_integer - Prints an integer
 * @args: The arguments list
 * @buffer: string of digit be printed
 * Return: The number of characters printed
 */
int _print_integer(va_list args, char *buffer)
{
	int i = BUFFSIZE - 2, negat = 0;
	int n = va_arg(args, int);
	unsigned int number;

	if (n == 0)
		buffer[i--] = '0';
	buffer[BUFFSIZE - 1] = '0';
	number = n;
	if (n < 0)
	{
		number = (unsigned int)((-1) * n);
		negat = 1;
	}
	for (; number > 0; number /= 10)
		buffer[i--] = (number % 10) + '0';

	i++;
	return (_writenum(buffer, negat, i));
}
