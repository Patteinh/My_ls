/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

#include <time.h>
#include <pwd.h>
#include <grp.h>
#include "my_ls.h"

int print_my_total_one(struct stat s, DIR *dir)
{
    struct dirent *read;
    int tmp = 0;
    dir = opendir("./");

    if ((dir) == NULL)
            return (84);
        while ((read = readdir(dir)) != NULL) {
            if (read->d_name[0] != '.') {
                stat(read->d_name, &s);
                tmp = tmp + (s.st_blocks);
            }
        }
    tmp = ((tmp * 1024) / 4096) *2;
    my_putstr("total ");
    my_putnbr(tmp);
    my_putchar('\n');
    return (tmp);
}

void display_rights(struct stat s)
{
    my_putstr((S_ISDIR(s.st_mode)) ? "d" : "-");
    my_putstr((s.st_mode & S_IRUSR) ? "r" : "-");
    my_putstr((s.st_mode & S_IWUSR) ? "w" : "-");
    my_putstr((s.st_mode & S_IXUSR) ? "x" : "-");
    my_putstr((s.st_mode & S_IRGRP) ? "r" : "-");
    my_putstr((s.st_mode & S_IWGRP) ? "w" : "-");
    my_putstr((s.st_mode & S_IXGRP) ? "x" : "-");
    my_putstr((s.st_mode & S_IROTH) ? "r" : "-");
    my_putstr((s.st_mode & S_IWOTH) ? "w" : "-");
    my_putstr((s.st_mode & S_IXOTH) ? "x" : "-");
    my_putstr(". ");
}

void display_time(struct stat s)
{
    char *str;
    struct dirent *read = 0;

    stat(read->d_name, &s);
    str = (ctime(&s.st_mtime));
    for (int i = 4; i != 16; i++)
        my_putchar(str[i]);
}

void display_link_pw_gr_size(struct stat s)
{
    struct dirent *read = 0;

    stat(read->d_name, &s);
    my_putnbr(s.st_nlink);
    my_putchar(' ');
    my_putstr(getpwuid(s.st_uid)->pw_name);
    my_putchar(' ');
    my_putstr(getgrgid(s.st_gid)->gr_name);
    my_putchar(' ');
    my_putnbr(s.st_size);
    my_putchar(' ');
}

void display_ls_l(struct stat s, struct dirent *read)
{
    stat(read->d_name, &s);
    display_rights(s);
    display_link_pw_gr_size(s);
    display_time(s);
    my_putchar(' ');
    my_putstr(read->d_name);
    my_putchar('\n');
}
