#include "main.h"
/**
  *_strcase - is pring string in s case
  *@args: list of ARGS
  *@buffer: arry of char to be handled
  *Return: count of number print
  */
int _strcase(va_list args, char *buffer)
{
	int count = 0;
	char *str = va_arg(args, char *);

	(void)buffer;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[count] != '\0')
	{
		count++;
	}
	return (write(MYSTDOUT_FILENO, str, count));
}
