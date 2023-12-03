/*
** EPITECH PROJECT, 2021
** check
** File description:
** check
*/

#include "my_ls.h"
#include "my.h"

int check_ls_start(int ac, char **av)
{
    if (ac >= 1)
        return (!check_ls(ac, av) ? (SUCCESS) : (ERROR));
    return (SUCCESS);
}

int check_ls(int ac, char **av)
{
    DIR *dir = opendir("./");

    if (ac == 1) {
        if (unique_ls(dir))
            return (ERROR);
        closedir(dir);
        return (SUCCESS);
    }
    if (av[1][0] == '-') {
        if ((check_flags(ac, av)))
            return (ERROR);
    } else
        if (my_opt_ls(ac, av))
            return (ERROR);
    return (SUCCESS);
}

int check_flags(int ac, char **av)
{
    struct stat s;
    struct dirent *read = 0;

    if (av[1][1] == 'l' && ac == 2)
        unique_ls_l(s, read);
    else if (av[1][1] == 'l' && ac > 2) {
        for (int i = 2; i != ac; i++)
        mult_ls_l(av[i]);
    }
    else if (av[1][1] != 'l')
        return (ERROR);
    return (SUCCESS);
}

int check_mult_ls(int ac, char **av, int i)
{
    if (my_strlen(av[i]) == 2 && av[i][0] == '.' && av[i][1] == '/') {
        display_name_of_dir(ac, "./");
        i++;
        if (i != ac)
            my_putchar('\n');
        else
            return (SUCCESS);
    }
    return (i);
}

int check_ls_opt(int ac, char **av)
{
    DIR *dir;
    int j = 0;
    int i = 1;
    dir = opendir(av[i]);

    for (i = 1; i != ac; i++) {
        if ((dir) == 0)
            j++;
        closedir(dir);
    }
    return (j);
}
