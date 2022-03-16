/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** emacs
*/

int my_put_nbr(int nb)
{
    int print;

    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);   
}
            
