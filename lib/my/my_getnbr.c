/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** emacs
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            neg = neg * -1;
        i = i + 1;
    }

    while (str[i] >= '0' && str[i] <= '9' && str[i] >= 0){
        c = str[i] - '0';
        nb = nb * 10 + c;
        i = i + 1;
    }

    nb = nb * neg;
    my_put_nbr(nb);
    return (nb);
}
