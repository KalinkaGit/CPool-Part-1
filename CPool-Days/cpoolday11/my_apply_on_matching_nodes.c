/*
** EPITECH PROJECT, 2022
** myapplyonmatchingnodes
** File description:
** my
*/

#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
    void const *data_ref, int (*cmp)())
{
    while (begin->next != 0) {
        if (cmp(begin->data, data_ref))
            (*f)(begin->data);

        begin = begin->next;
    }
}
