/*
** EPITECH PROJECT, 2022
** My Compute Square Root
** File description:
** This function returns the square root
** of the number give as argument.
*/

int my_compute_square_root(int nb)
{
    for (int i = 0; (i * i) <= nb; i++) {
        if (i * i == nb) {
            return (i);
        }
    }

    return (0);
}
