/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** emacs
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] => '0' && str[i] =< '9')
            i = i + 1;
        else
            return (0);
    }
    return (1);
}
