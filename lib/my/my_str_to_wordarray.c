/*
** EPITECH PROJECT, 2020
** my_str_to_wordarray.c
** File description:
** emacs
*/

int coumpt(char const *str)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        if (my_str_isalpha(str[a]) == 1 && my_str_isalpha(str[a + 1]) != 1) {
            b = b + 1;
        }
        a = a + 1;
    }
    return (b);
}

char **my_str_to_word_array(char const *str)
{
    int y = coumpt(str);
    char **result = malloc(10000);
    int a = 0;
    int b = 0;
    int c = 0;

    while (b < y){
        c = 0;
        result[b] = malloc(100000);
        while (str[a] != '\0' && my_str_isalpha(str[a]) != 0) {
            result[b][c] = str[a];
            c = c + 1;
            a = a + 1;
        }
        result[b][c] = '\n';
        result[b][c + 1] = '\0';
        a = a + 1;
        b = b + 1;
    }
    return (result);
}
