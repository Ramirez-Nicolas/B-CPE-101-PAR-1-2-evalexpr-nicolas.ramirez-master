/*
** EPITECH PROJECT, 2020
** my_epurstr.c
** File description:
** emacs
*/

int my_whitespace(int c)
{
    if (c == '\t' || c == ' ')
        return (1);
    return (0);
}

char *my_epurstr(char *str)
{
    int i = 0;

    while (my_whitespace(str[i]))
        i++;
    while (str[i] != '\0')
    {
        if (my_whitespace(str[i]) != 1)
            my_putchar(str[i]);
        while (my_whitespace(str[i]) && my_whitespace(str[i+1]))
            i++;
        if (my_whitespace(str[i]) && my_str_isalpha(str[i+1]))
            my_putchar(str[i]);
        i++;
    }
}
