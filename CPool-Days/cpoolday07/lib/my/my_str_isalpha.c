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
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] > 65 || str[i] < 90)
            && (str[i] > 97 || str[i] < 122)) {
            return (1);
        }
    }

    return (0);
}
