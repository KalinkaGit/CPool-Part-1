/*
** EPITECH PROJECT, 2022
** do_op
** File description:
** do_op
*/

#include "my.h"

int error_gest(int ac, char **av)
{
    if (ac != 4)
        return (1);

    if (my_char_isoperator(av[2][0]) == 0) {
        write(2, "0", 1);
        return (1);
    }

    if (av[2][0] == 47 && my_getnbr(av[3]) == 0) {
        write(2, "Stop: division by zero\n", 23);
        return (1);
    }

    if (av[2][0] == 37 && my_getnbr(av[3]) == 0) {
        write(2, "Stop: modulo by zero\n", 21);
        return (1);
    }

    return (0);
}

void do_op(char **av)
{
    if (av[2][0] == '+')
        my_put_nbr(my_getnbr(av[1]) + my_getnbr(av[3]));
    if (av[2][0] == '-')
        my_put_nbr(my_getnbr(av[1]) - my_getnbr(av[3]));
    if (av[2][0] == '*')
        my_put_nbr(my_getnbr(av[1]) * my_getnbr(av[3]));
    if (av[2][0] == '/')
        my_put_nbr(my_getnbr(av[1]) / my_getnbr(av[3]));
    if (av[2][0] == '%')
        my_put_nbr(my_getnbr(av[1]) % my_getnbr(av[3]));

    my_putchar('\n');
}

int main(int ac, char **av)
{
    if (error_gest(ac, av) == 1)
        return (404);

    do_op(av);

    return (0);
}
