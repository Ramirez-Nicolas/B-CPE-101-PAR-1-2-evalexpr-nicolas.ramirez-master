/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** emacs
*/

#include <stdlib.h>
#include <string.h>

char *my_strdup(char const *src)
{
    char *str;
    char *dest;
    char d = 0;

    str = malloc(sizeof(char) * strlen(str));
    while (src > '\0'){
        str[d] = src[d];
        d = d + 1;
    }
    str[d] = '\0';
    my_strcpy(dest, src);
    return(str);
}
