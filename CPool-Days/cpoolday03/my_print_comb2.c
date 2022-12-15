/*
** EPITECH PROJECT, 2022
** My Print Comb 2
** File description:
** This function prints all the different combinations
** of two-digits numbers in ascending order
*/

int count_right(int left)
{
    for (int right = 0; right < 100; right++) {
        int leftLNB = left / 10;
        int leftRNB = left % 10;
        int rightLNB = right / 10;
        int rightRNB = right % 10;

        if (left < right) {
            my_putchar(48 + leftLNB);
            my_putchar(48 + leftRNB);
            my_putchar(' ');
            my_putchar(48 + rightLNB);
            my_putchar(48 + rightRNB);
        }

        if (left < right && (left != 98 || right != 99)) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb2(void)
{
    for (int left = 0; left < 100; left++) {
        count_right(left);
    }
}
