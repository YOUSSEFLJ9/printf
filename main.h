#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <limits.h>
#define MYSTDOUT_FILENO 1
int _putchar(char c);
int _strlen(const char *str);
int _printf(const char *format, ...);
int _printstr(const char *str);
int _printint(int n);
int _print_switch(const char *format, ...);
#endif
