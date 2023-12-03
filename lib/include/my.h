/*
** EPITECH PROJECT, 2022
** lib.h
** File description:
** lib.h
*/

#ifndef _MY_H_
    #define _MY_H_

void my_putchar(const char c);
void my_putstr(const char *str);
int  my_strlen(const char *str);
int  my_putnbr(int nb);
char *my_strcpy(char *dest, const char *src);
char *my_strcat(const char *left, const char *right);

static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;

#endif
