/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** display string
*/

#include <unistd.h>

void my_putstr(const char *str)
{
    if (!str || !str[0])
        return;
    for (; *str; str++)
        write(1, &(*str), 1);
}
