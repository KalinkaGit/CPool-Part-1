/*
** EPITECH PROJECT, 2022
** My GetNBR
** File description:
** This function returns a number from a string
*/

#include <stdio.h>

#define bool int
#define true 1
#define false 0

int my_getnbr(char const *str)
{
    long int fint = 0;
    bool isneg = false;

    for (int i = 0; i < my_strlen(str); i++)
    {
        my_putchar(str[i]);
        if (str[i] == '-' && (str[i + 1] > '0'
            && str[i + 1] <= '9')) {
            isneg = true;
        }

        if (str[i] > '0' && str[i] <= '9') {
            //printf("a");
            fint = (fint * 10) + (str[i] - '0');
        }

        if ((str[i] < '0' && str[i] >= '9')
            || (str[i - 1] > '0' && str[i - 1] < 58)) {
            fint = (fint * 10) + (str[i] - '0');

            if (isneg) {
                fint = -fint;
            }

            //printf("a");

            //return (fint);
        }

        if (fint < -2147483648 || fint > 2147483647) {
            //printf("%d", fint);
            //return (0);
        }
    }

    printf("%d", fint);
}
