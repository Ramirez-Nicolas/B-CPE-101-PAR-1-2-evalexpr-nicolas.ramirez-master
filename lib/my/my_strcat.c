/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** emacs
*/

#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    while (src[i])
        dest[len + i] = src[i++];
    dest[len + i] = '\0';
    return (dest);
}
