/*
** EPITECH PROJECT, 2022
** mylistsize
** File description:
** my
*/

#include "include/my.h"
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *tmp = *begin;
    linked_list_t *prev = 0;
    linked_list_t *next = 0;

    while (tmp != 0) {
        next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }

    *begin = prev;
}
