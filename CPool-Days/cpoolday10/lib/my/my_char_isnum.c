/*
** EPITECH PROJECT, 2022
** My Str Isnum
** File description:
** This function returns 1 if the string passed
** as parameter only contains digits and 0 otherwise.
*/

int my_char_isnum(char const c)
{
    if (c >= 48 && c <= 57)
        return (1);

    return (0);
}
