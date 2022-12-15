/*
** EPITECH PROJECT, 2022
** My Strcat
** File description:
** This function concatenates two strings.
*/

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int destl = my_strlen2(dest);
    int i;

    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[destl + i] = src[i];
    }

    dest[destl + i] = '\0';

    return (dest);
}
