/*
** EPITECH PROJECT, 2022
** My_Print_Alpha.c
** File description:
** This program prints alphabet ni ascending order
*/
int my_print_alpha(void)
{
    int i = 97;

    while (i < 123) {
        my_putchar(i);
        i += 1;
    }
}
