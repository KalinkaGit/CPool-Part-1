/*
** EPITECH PROJECT, 2022
** Testing
** File description:
** main.c for testing
*/

void my_putchar(char c) {
    write(1, &c, 1);
}

int main()
{
    my_put_nbr(0);
    my_put_nbr(21);
    my_put_nbr(-21);
    return (0);
}
                 
