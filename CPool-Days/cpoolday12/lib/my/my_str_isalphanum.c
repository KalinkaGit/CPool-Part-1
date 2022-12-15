/*
** EPITECH PROJECT, 2022
** isalphanum
** File description:
** isalphanum
*/

int my_str_isalphanum(char const str)
{
    if ((str >= 65 && str <= 90)
        || (str >= 97 && str <= 122)
        || (str >= 48 && str <= 57)
        && (str != 32)) {
        return (1);
    }

    return (0);
}
