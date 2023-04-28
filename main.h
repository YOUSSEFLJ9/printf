#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFSIZE 1024
#define MYSTDOUT_FILENO 1
#define UNUSED(x) (void)(x)

/**
  *struct struc - this struct take char from the format
  *@c: char reprsent the char after %
  *
  *@func: is a function that match with the c
  */
typedef struct struc
{
	char c;
	int (*func)(va_list, char*);
} specifier;

int _printstr(char *buffer, int *buflong);
int _printf(const char *format, ...);
int _putchar(va_list args, char *buffer);
int _prcntcase(va_list args, char *buffer);
int _strcase(va_list args, char *buffer);
int _handlagrs(const char *format, int  *i, va_list args, char *buffer);
#endif
