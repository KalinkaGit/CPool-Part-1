/*
** EPITECH PROJECT, 2022
** my strlowcase.c
** File description:
** This function puts every letter of
** every word in it in lowercase.
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90 && str[i] >= 65)
            str[i] = str[i] + 32;
    }

    return (str);
}
