/*
** EPITECH PROJECT, 2021
** unique_ls
** File description:
** unique_ls
*/

#include <stddef.h>
#include "my_ls.h"

int my_opt_ls(int ac, char **av)
{
    int j = 0;

    j = check_ls_opt(ac, av);
    if (j >= 1)
        return (ERROR);
    else
        mult_ls(ac, av);
    return (SUCCESS);
}

int unique_ls(DIR *dir)
{
    struct dirent *read;
    dir = opendir("./");

    if ((dir) == NULL)
        return (ERROR);
    while ((read = readdir(dir)) != 0) {
        if ((read->d_name[0] != '.')) {
            my_putstr(read->d_name);
            my_putstr("  ");
        }
    }
    my_putchar('\n');
    closedir(dir);
    return (SUCCESS);
}

int unique_ls_l(struct stat s, struct dirent *read)
{
    DIR *dir;
    dir = opendir("./");

        if ((dir) == NULL)
            return (ERROR);
        print_my_total_one(s, dir);
        while ((read = readdir(dir)) != 0)
            if (read->d_name[0] != '.')
                display_ls_l(s, read);
        closedir(dir);
        return (SUCCESS);
}
