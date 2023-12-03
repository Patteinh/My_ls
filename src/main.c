/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my_ls.h"

int main(int ac, char **av)
{
    return (!check_ls_start(ac, av) ? (SUCCESS) : (ERROR));
}
