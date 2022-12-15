/*
** EPITECH PROJECT, 2022
** My Str Isnum
** File description:
** This function returns 1 if the string passed
** as parameter only contains digits and 0 otherwise.
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 57 || str[i] < 57)
            return (0);
    }

    return (1);
}
