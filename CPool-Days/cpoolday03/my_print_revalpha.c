/*
** EPITECH PROJECT, 2022
** My Print Revalpha
** File description:
** This function prints alphabet in descending order
*/

int my_print_revalpha(void)
{
    int i = 122;

    while (i > 96) {
        my_putchar(i);
        i -= 1;
    }
}
