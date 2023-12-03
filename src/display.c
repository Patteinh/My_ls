/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

#include "my.h"
#include "my_ls.h"

void display_all_contents(DIR *dir)
{
    struct dirent *read;

    while ((read = readdir(dir)) != 0)
        if (read->d_name[0] != '.') {
            my_putstr(read->d_name);
            my_putchar('\n');
        }
}

void display_name_of_dir(int ac, char *name)
{
    DIR *dir = opendir(name);

    if (ac >= 3)
        my_putstr("./:\n");
    display_all_contents(dir);
    closedir(dir);
}
