/*
** EPITECH PROJECT, 2022
** My Advanced Sort Word Array
** File description:
** This function sorts the words depending
** on the return value of the function passed as parameter.
*/

#include "my.h"

int my_advanced_sort_word_array(char **tab,
                                int(*cmp)(char const *, char const *))
{
    for (int i = 0; i < my_get_array_size(tab); i++) {
        if (i == 0)
            continue;

        if ((cmp)(tab[i], tab[i - 1]) < 0) {
            char *tmp = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = tmp;
            my_advanced_sort_word_array(tab, cmp);
            break;
        }
    }

    return (0);
}
