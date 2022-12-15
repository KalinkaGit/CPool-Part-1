/*
** EPITECH PROJECT, 2022
** My Compute Factorial Rec
** File description:
** This recursive function returns the factorial
** of the number given as parameter
*/

int my_compute_factorial_rec(int nb)
{
    int res;

    if (nb < 0 || nb > 12) {
        return (0);
    }

    if (nb == 0) {
        return (1);
    }

    res = nb * my_compute_factorial_rec(nb - 1);

    return (res);
}
