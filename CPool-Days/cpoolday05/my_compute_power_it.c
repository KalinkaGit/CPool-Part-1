/*
** EPITECH PROJECT, 2022
** My Compute Power It
** File description:
** This iterative function returns the first
** argument raised to the power p, where p is the second argument.
*/

int my_compute_power_it(int nb, int p)
{
    int res = nb;
    int oldres = 0;
    if (p == 0) {
        return (1);
    }
    if (p < 0 || nb == 0) {
        return (0);
    }
    while (p > 1) {
        oldres = res;
        res = res * nb;
        if (res < oldres) {
            return (0);
        }
        p -= 1;
    }
    return (res);
}
