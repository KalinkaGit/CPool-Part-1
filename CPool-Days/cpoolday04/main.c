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

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

#include <stdio.h>

int main(void) {
    char arr[14];
    
    arr[0] = 'S';
    arr[1] = 'i';
    arr[2] = 'r';
    arr[3] = ',';
    arr[4] = ' ';
    arr[5] = 'y';
    arr[6] = 'e';
    arr[7] = 's';
    arr[8] = ' ';
    arr[9] = 's';
    arr[10] = 'i';
    arr[11] = 'r';
    arr[12] = '!';
    arr[13] = '\0';

    my_evil_str(&arr);
    
    return(0);
}
