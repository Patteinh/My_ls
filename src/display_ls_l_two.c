/*
** EPITECH PROJECT, 2021
** display_ls_l_two
** File description:
** display_ls_l_two
*/

#include <stdlib.h>
#include "my_ls.h"

void display_ls_l_folder(struct stat s, char *av)
{
    stat(av, &s);
    display_rights(s);
    display_link_pw_gr_size(s);
    display_time(s);
    my_putchar(' ');
    my_putstr(av);
    my_putchar('\n');
}

void display_ls_l_path(struct stat s, struct dirent *read, char *av)
{
    char *rec;

    rec = my_string(av, read->d_name);
    stat(rec, &s);
    display_rights(s);
    display_link_pw_gr_size(s);
    display_time(s);
    my_putchar(' ');
    my_putstr(read->d_name);
    my_putchar('\n');
}

char *my_string(char *str, char *str2)
{
    char *str3;

    if (str[0] == '.')
        return str2;
    if (str[my_strlen(str) - 1] == '/')
        str[my_strlen(str) - 1] = '\0';
    str3 = malloc(sizeof(char *) * (my_strlen(str) + my_strlen(str2) + 1));
    str3 = my_strcpy(str3, str);
    str3[my_strlen(str)] = '/';
    str3[my_strlen(str) + 1] = '\0';
    str3 = my_strcat(str3, str2);
    return (str3);
}
