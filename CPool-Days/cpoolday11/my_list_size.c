/*
** EPITECH PROJECT, 2022
** mylistsize
** File description:
** my
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *list2 = begin;
    int i = 0;

    for (i; list2 != 0; i++) {
        list2 == list2->next;
    }

    return (i);
}
