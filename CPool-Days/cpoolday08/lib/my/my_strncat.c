/*
** EPITECH PROJECT, 2022
** My Strncat
** File description:
** This function concatenates n characters of
** the src string to the end of the dest string.
*/

int my_strlen3(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}

char *my_strncat(char *dest, const char *src, int nb)
{
    int destl = my_strlen3(dest);
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++) {
        dest[destl + i] = src[i];
    }

    dest[destl + i] = '\0';

    return dest;
}
