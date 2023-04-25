#include "main.h"
/**
* _printint - prints an integer
* @n: the integer to print
* Return: the number of characters printed
*/

int _printint(int n)
{
int i, sign, counter = 0;
char digits[10];

sign = (n < 0) ? -1 : 1;
i = 0;
do {
digits[i++] = (char)((n % 10) * sign + '0');
n /= 10;
} while (n != 0);
if (sign < 0)
digits[i++] = '-';
while (i-- > 0)
{
_putchar(digits[i]);
counter++;
}
return (counter);
}
