/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** my_ls
*/

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "my.h"

#ifndef _PROJECT_H
    #define _PROJECT_H

int check_ls_start(int ac, char **av);
int check_ls(int ac, char **av);
int check_ls_opt(int ac, char **av);
int my_opt_ls(int ac, char **av);
int unique_ls(DIR *dir);
int mult_ls(int ac, char **av);
int check_flags(int ac, char **av);
int check_mult_ls(int ac, char **av, int i);
int unique_ls_l(struct stat s, struct dirent *read);
int mult_ls_l(char *av);
int print_my_total_one(struct stat s, DIR *dir);
void display_ls_l(struct stat s, struct dirent *read);
void display_ls_l_folder(struct stat s, char *av);
void display_ls_l_path(struct stat s, struct dirent *read, char *av);
char *my_string(char *str, char *str2);
void display_rights(struct stat s);
void display_my_info(struct stat s);
void display_time(struct stat s);
void display_link_pw_gr_size(struct stat s);
void display_name_of_dir(int ac, char *name);
void display_all_contents(DIR *dir);

#endif
