/*
** EPITECH PROJECT, 2022
** My Str Isalpha
** File description:
** This function returns 1 if the string
** passed as parameter only contains alphabetical
** characters and 0 if the string contains
** another type of character.
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z')
            || str[i] == ' ') {
            i++;
        } else {
            return (0);
        }
    }

    return (1);
}
