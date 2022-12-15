/*
** EPITECH PROJECT, 2022
** My Compute Factorial It
** File description:
** This iterative function returns the factorial
** of the number given as a parameter.
*/

int my_compute_factorial_it(int nb)
{
    int b = nb;
    int i = 1;
    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 1 || b == 1) {
        return (1);
    }
    if (nb == 0) {
        return (1);
    }
    while (i < b) {
        nb = nb * (b - i);
        i += 1;
    }
    return (nb);
}
