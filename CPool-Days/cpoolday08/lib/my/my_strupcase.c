/*
** EPITECH PROJECT, 2022
** My Strupcase
** File description:
** This functions puts every letter of
** every word in it in uppercase.
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 122 && str[i] >= 97)
            str[i] = str[i] - 32;
    }

    return (str);
}
