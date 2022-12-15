void my_putchar(char c) {
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }

    return i;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }

    if (nb > 9) {
        my_put_nbr(nb / 10);
    }

    my_putchar(48 + (nb % 10));
}

int my_is_prime(int nb)
{
    if (nb <= 0) {
        return (0);
    }

    for (int i = 2; nb % i < 0; i++) {
        if (i == nb) {
            return (1);
        }
    }
}

#include <stdio.h>

int main(void) {
    
    printf("%i", my_compute_factorial_rec(3));
    
    return(0);
}
