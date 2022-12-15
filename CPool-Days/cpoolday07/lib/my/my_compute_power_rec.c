/*
** EPITECH PROJECT, 2022
** My Compute Power Rec
** File description:
** This recursive function returns
** the first argument raised to power p,
** where p is the second argument.
*/

int my_compute_power_rec(int nb, int p)
{
    int oldres = 0;

    if (p == 0) {
        return (1);
    }

    if (p < 0 || nb == 0) {
        return (0);
    }

    oldres = nb;

    if (nb < oldres) {
        return (0);
    }

    nb = nb * my_compute_power_rec(nb, p - 1);

    return (nb);
}
