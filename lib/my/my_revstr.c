/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** emacs
*/

#include <stddef.h>

char *my_revstr(char *str)
{
    char src;
    int i = 0;
    int l = my_strlen(str) - 1;

    while (i <= l / 2) {
        src = str[i];
        str[i] = str[l-i];
        str[l-i] = src;
        i = i + 1;
    }
    return (str);
}
