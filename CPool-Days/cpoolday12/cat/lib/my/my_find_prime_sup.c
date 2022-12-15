/*
** EPITECH PROJECT, 2022
** My Find Prime Sup
** File description:
** This function returns the smallest prime
** number that is greater than, or equal to,
** the number given as parameter.
*/

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb <= 2) {
        return (2);
    }

    while (my_is_prime(i) != 1) {
        i += 1;
    }

    return (i);
}
