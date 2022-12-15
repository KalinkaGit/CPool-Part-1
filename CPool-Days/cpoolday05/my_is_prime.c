/*
** EPITECH PROJECT, 2022
** My Is Prime
** File description:
** This function returns 1 if the number
** is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2) {
        return (0);
    } else if (nb == 2) {
        return (1);
    }

    while (nb % i > 0) {
        i++;
        if (i == nb) {
            return (1);
        }
    }

    return (0);
}
