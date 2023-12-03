/*
** EPITECH PROJECT, 2022
** my_putnbr
** File description:
** Display a number
*/

#include "my.h"

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb / 10)
        my_putnbr(nb / 10);
    my_putchar((nb % 10) + '0');
    return (0);
}
