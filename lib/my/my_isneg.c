/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** emacs
*/

#include <my.h>

int my_isneg(int nb)
{
    if(nb < 0)
    {
        my_putchar('N');
    }
    else
    {
        my_putchar('P');
    }
}
