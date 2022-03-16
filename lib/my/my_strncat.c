/*
** EPITECH PROJECT, 2020
** my_strncat.n
** File description:
** emacs
*/

#include <stddef.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int i = 0;

    while(i < nb && src[i])
    {
        dest[len + i] = src[i];
        i = i + 1;
    }
    dest[len + i] = '\0';
    return (dest);
}
