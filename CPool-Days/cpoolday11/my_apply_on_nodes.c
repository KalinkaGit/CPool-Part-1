/*
** EPITECH PROJECT, 2022
** myapplyonnodes
** File description:
** my
*/

#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *tmp = begin;

    if (!begin || !f) {
        return (501);
    }

    while (tmp != 0) {
        (*f)(tmp->data);
        tmp = tmp->next;
    }

    return (0);
}
