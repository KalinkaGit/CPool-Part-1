/*
** EPITECH PROJECT, 2022
** My Sort Word Array
** File description:
** This function sorts the words received via
** my_str_to_word_array using ascii order.
*/

#include "my.h"

int my_sort_word_array(char **tab)
{
    for (int i = 0; i < my_get_array_size(tab); i++) {
        if (i == 0)
            continue;

        if (my_strcmp(tab[i], tab[i + 1]) < 0) {
            char *tmp = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = tmp;
            tab[i + 1] = tmp;
            my_sort_word_array(tab);
            break;
        }
    }

    return (0);
}
