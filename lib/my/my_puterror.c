/*
** EPITECH PROJECT, 2020
** my_puterror.c
** File description:
** emacs
*/

#include <unistd.h>

void my_puterror(char const *s)
{
    write (2 ,&s ,1);
}
