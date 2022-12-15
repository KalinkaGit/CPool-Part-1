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

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = 0;

    for (int i = 0; i < ac; i++) {
        linked_list_t *el;
        el = malloc(sizeof(linked_list_t));
        el->data = av[i];
        el->next = list;
        list = el;
    }

    return (list);
}
