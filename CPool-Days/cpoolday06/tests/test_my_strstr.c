/*
** EPITECH PROJECT, 2022
** Test my strstr
** File description:
** test
*/

#include <criterion/criterion.h>

Test(my_strstr, best_test) {
    cr_assert_str_eq(my_strstr(strdup("This is a test"), strdup("is")), strstr(strdup("This is a test"), strdup("is")));
}
