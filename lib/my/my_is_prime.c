/*
** EPITECH PROJECT, 2020
**  my_is_prime.c
** File description:
** emacs
*/

int my_is_prime(int nb)
{
    int i;

    if(nb < 2){
        return (0);
    }
    else if(nb == 2){
        return (1);
    }
    else if(nb % 2 == 0){
        return (0);
    }
    else{
        i = 3;
        while(i * i <= nb){
            if(nb % i == 0){
                return (0);
            }
            i = i + 2;
        }
    }
    return (1);
}
