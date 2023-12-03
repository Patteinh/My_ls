/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** display char
*/

#include <unistd.h>

void my_putchar(const char c)
{
    write(1, &c, 1);
}
