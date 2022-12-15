/*
** EPITECH PROJECT, 2022
** My Strdup
** File description:
** This function allocates memory and copies
** the string given as argument in it.
*/

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (i; i < my_strlen(src); i++) {
        str[i] = src[i];
    }

    str[i] = '\0';
    return (str);
}
