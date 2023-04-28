#include "main.h"
/**
  *_prcntcase - hundle the percnet case (single %)
  *@args: the list of args
  *@buffer: the string to hundle
  *Return: chars print as numbers{numbers}
  */
int _prcntcase(va_list args, char *buffer)
{
	UNUSED(args);
	UNUSED(buffer);
	return (write(MYSTDOUT_FILENO, "%%", 1));
}
