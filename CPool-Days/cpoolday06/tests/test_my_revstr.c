/*
** EPITECH PROJECT, 2022
** Test my revstr
** File description:
** test
*/

#include <criterion/criterion.h>

Test(my_revstr, best_test) {
    cr_assert_str_eq(my_revstr(strdup("Hello")), "olleH");
}
