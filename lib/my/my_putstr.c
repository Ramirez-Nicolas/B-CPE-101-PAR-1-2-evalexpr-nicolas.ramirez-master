/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** emacs
*/

int my_putstr(char const *str)
{
    int s = 0;

    while (str[s] != '\0'){
        my_putchar(str[s]);
        s = s + 1;
    }
}
