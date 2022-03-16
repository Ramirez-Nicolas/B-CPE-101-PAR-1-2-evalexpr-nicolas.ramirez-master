/*
** EPITECH PROJECT, 2020
** count_words.c
** File description:
** emacs
*/

int count_world(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i]) {
        while (my_str_isalpha(str[i]) == 0 && str[i])
            i++;
        while (my_str_isalpha(str[i]) == 1 && str[i])
            i++;
        if (my_str_is_alpha(str[i - 1]) == 1)
            nb++;
    }
    return (nb);
}
