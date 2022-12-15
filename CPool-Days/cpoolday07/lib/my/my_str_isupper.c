/*
** EPITECH PROJECT, 2022
** My Str Isupper
** File description:
** This function returns 1 if the string passed
** as paramater only contains uppercase alphabetical
** characters and 0 otherwise.
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            return (0);
    }

    return (1);
}
