/*
** EPITECH PROJECT, 2022
** My Params To List
** File description:
** This function creates a new list from
** the command line arguments. The address
** of the list's first node is returned.
*/

#include "include/my.h"
#include "include/mylist.h"

void add(linked_list_t **list, char const * const av)
{
    linked_list_t *list2;

    list2 = malloc(sizeof(*list2));
    list2->data = av;
    *list = list2;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list;
    list = 0;

    for (int i = 0; i < ac; i++) {
        add(&list, av[i]);
    }

    return (list);
}
