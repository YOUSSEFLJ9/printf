/**
 * print_integer - Prints an integer
 * @args: The arguments list
 * Return: The number of characters printed
 */
int print_integer(va_list args)
{
    int n = va_arg(args, int);
    char *num_str = _print_number(n);

    if (!num_str)
        return (-1);

    int printed = _putstr(num_str);

    free(num_str);

    return (printed);
}
