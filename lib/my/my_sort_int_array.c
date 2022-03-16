/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** emacs
*/

#include <stddef.h>
#include "my.h"

static void swap_if_needed(int *nb1, int *nb2);

voidmy_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            swap_if_needed(&array[j], &array[j + 1]);
        }
    }
}

void swap_if_needed(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}
