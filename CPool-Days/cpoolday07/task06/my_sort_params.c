/*
** EPITECH PROJECT, 2022
** My Print Params
** File description:
** This function prints its arguments.
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }

    my_putchar('\n');
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char *argv[])
{
    char *tmp;
    int test = 0;
    int i = 0;
    while (i < argc - 1) {
        while (argv[i][test] == argv[i + 1][test]) {
            test++;
        }
        if (argv[i][test] > argv[i + 1][test]) {
            my_swap(&argv[i], &argv[i + 1]);
            i = 0;
            test = 0;
        }
        i++;
        test = 0;
    }
    for (int j = 0; j < argc; j++) {
        my_putstr(argv[j]);
    }
    return (0);
}
