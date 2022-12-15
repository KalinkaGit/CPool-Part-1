/*
** EPITECH PROJECT, 2022
** My Swap
** File description:
** This function swaps the content of two
** integers whose addresses are given in parameters
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
