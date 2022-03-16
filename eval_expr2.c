/*
** EPITECH PROJECT, 2020
** eval_expr2.c
** File description:
** emacs
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "include/my.h"

char *my_numbers(char *str)
{
    char *c;
    int i = 0;
    int a = 0;

    c = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (str[i] == '-') {
        c[a] = '-';
        a++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        c[a] = str[i];
        a++;
        i++;
    }
    return (c);
}

char *str_withoutspace(char *str)
{
    char *c;
    int i = 0;
    int a = 0;

    c = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (c == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            c[i] = str[i];
            a++;
            i++;
        }
    }
    return (c);
}
