/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** emacs
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            i = i + 1;
        }
        else
            return (0);
    }
    return (1);
}
