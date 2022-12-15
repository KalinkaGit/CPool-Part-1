/*
** EPITECH PROJECT, 2022
** My Get Array Size
** File description:
** Returns array size.
*/

int my_get_array_size(char **tab)
{
    int i = 0;

    while (tab[i] != 0) {
        i++;
    }

    return (i);
}
