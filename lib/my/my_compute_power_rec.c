/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** emacs
*/

int my_compute_power_rec(int nb, int power)

{
    if (p > 0)
        nb *= my_compute_power_rec(nb, p - 1);
    else
        return (1);
    return (nb);
}
