/*
** EPITECH PROJECT, 2022
** My Print Comb
** File description:
** This function prints all the numbers composed by three
** different digits numbers in ascending order, only the
** smallest number composed by those digits are displayed.
*/

int comb_char(int i, int j, int k)
{
    my_putchar(i);
    my_putchar(j);
    my_putchar(k);

    if (i != 55 || j != 56 || k != 57) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int check_comb_uni(int i, int j)
{
    for (int k = 48; k < 58; k++) {
        if (k != j && j != i && k != i && j > i && k > j) {
            comb_char(i, j, k);
        }
    }
}

int check_comb_diz(int i)
{
    for (int j = 48; j < 58; j++) {
        check_comb_uni(i, j);
    }
}

int my_print_comb(void)
{
    for (int i = 48; i < 58; i++) {
        check_comb_diz(i);
    }
}
