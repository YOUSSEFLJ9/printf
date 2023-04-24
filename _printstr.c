#include "main.h"

/**
  *_printstr - this fuction print the strng given
  *@str: is a pointer to string
  *
  *Return: the lenght of the string
  */
int _printstr(const char *str)
{
	int len = 0;

	if (str != NULL)
	{
		len = _strlen(str);
		write(MYSTDOUT_FILENO, str, len);
	}
	return (len);
}
