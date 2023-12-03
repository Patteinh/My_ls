/*
** EPITECH PROJECT, 2021
** mult_ls
** File description:
** mult_ls
*/

#include "my.h"
#include "my_ls.h"

int mult_ls_l(char *av)
{
    DIR *dir = opendir(av);
    struct stat s;
    struct dirent *read = 0;

    if (dir == NULL) {
        display_ls_l_folder(s, av);
        return 0;
    }
    print_my_total_one(s, dir);
    if (dir) {
        while ((read = readdir(dir)) != NULL) {
            if (read->d_name[0] != '.')
                display_ls_l_path(s, read, av);
        }
    }
    my_putstr("\n");
    closedir(dir);
    return (SUCCESS);
}

int mult_ls(int ac, char **av)
{
    DIR *dir = opendir(*av);

    for (int i = 1; i != ac; i++) {
        i = check_mult_ls(ac, av, i);
        if (i == 0)
            return (SUCCESS);
        dir = opendir(av[i]);
        my_putstr(av[i]);
        my_putstr(":\n");
        display_all_contents(dir);
        if (i != ac - 1)
            my_putchar('\n');
        closedir(dir);
    }
    return (SUCCESS);
}
