#include "main.h"

int _writenum(char *buffer, int negat, int i)
{
	char sign;
	int len = BUFFSIZE - i - 1;

	if (negat != 0)
	{
		sign = '-';
		len++;
	}
	if (sign)
		buffer[--i] = sign;
	return (write(1, &buffer[i], len));

}

/**
 * print_integer - Prints an integer
 * @args: The arguments list
 * @buffer: strig
 * Return: The number of characters printed
 */
int _print_integer(va_list args, char *buffer)
{
	int i = BUFFSIZE - 2, negat = 0;
	long int n = va_arg(args, long int);
	unsigned long num;

	if (n == 0)
		buffer[i--] = '0';
	buffer[BUFFSIZE - 1] = '0';
	num = (unsigned long)n;
	if (n < 0)
	{
		num = (unsigned long)((-1) * n);
		negat = 1;
	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	return (_writenum(buffer, negat, i));
}
