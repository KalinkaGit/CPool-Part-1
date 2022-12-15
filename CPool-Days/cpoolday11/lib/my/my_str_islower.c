/*
** EPITECH PROJECT, 2022
** My Str Islower
** File description:
** This function returns 1 if the string
** passed as parameter only contains lowercase
** alphabetical characters and 0 otherwise.
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            return (0);
    }

    return (1);
}
