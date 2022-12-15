/*
** EPITECH PROJECT, 2022
** My Put NBR
** File description:
** This function prints the number given as a parameter
*/

int my_put_nbr(int nb)
{
    long nbr = nb;

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }

    if (nbr > 9) {
        my_put_nbr(nbr / 10);
    }

    my_putchar(48 + (nbr % 10));
}
