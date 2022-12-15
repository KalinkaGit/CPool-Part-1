/*
** EPITECH PROJECT, 2022
** My Str Isprintable
** File description:
** This function returns 1 if the string
** passed as parameter only contains printable
** characters and 0 otherwise.
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32)
            return (0);
    }

    return (1);
}
