/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copy string to another
*/

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
