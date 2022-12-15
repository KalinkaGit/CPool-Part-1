/*
** EPITECH PROJECT, 2022
** My Rev Params
** File description:
** This function prints its arguments reversed.
*/

void my_putchar2(char c)
{
    write(1, &c, 1);
}

int my_putstr2(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar2(str[i]);
    }
}

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr2(argv[i]);
        my_putchar2('\n');
    }
    return (0);
}
