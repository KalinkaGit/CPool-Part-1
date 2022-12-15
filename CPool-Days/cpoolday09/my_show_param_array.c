/*
** EPITECH PROJECT, 2022
** My Show Param Array
** File description:
** This function displays the content of an array
** created with my_params_to_array(...);.
*/

#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != '0'; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
    }

    return (0);
}
