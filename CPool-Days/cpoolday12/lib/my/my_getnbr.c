/*
** EPITECH PROJECT, 2022
** test
** File description:
** test
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;

    for (i; str[i] != '\0'; i++) {
        nb += str[i] - 48;
        nb = nb * 10;
    }

    nb = nb / 10;

    if (str[0] == '-')
        return (-1 * nb);
    return (nb);
}
