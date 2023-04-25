#ifndef MAIN_H
#define MAIN_H
#define MYSTDOUT_FILENO 1
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _strlen(const char *str);
int _printf(const char *format, ...);
int _printstr(const char *str);
int _printint(int n);
#endif
