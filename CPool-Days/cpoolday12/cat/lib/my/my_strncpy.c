/*
** EPITECH PROJECT, 2022
** My Strncpy
** File description:
** This function copies n characters from
** a string into another and returns dest.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return (dest);
}
