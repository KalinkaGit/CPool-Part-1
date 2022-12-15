/*
** EPITECH PROJECT, 2022
** My Putnbr Base
** File description:
** This function converts and displays a
** decimal number into a number in a given base.
*/

int my_putnbr_base(int nbr, char const *base)
{
    int res = 0;

    if (base == "") {
        for (nbr; nbr % 2 >= 2; nbr % 2) {
            res = res * 10 + nbr - (nbr % 2) * 2;
        }

        res = res * 10 + nbr - (nbr % 2) * 2;
    }
}
