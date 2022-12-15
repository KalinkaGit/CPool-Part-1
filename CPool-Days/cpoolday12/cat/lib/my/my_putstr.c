/*
** EPITECH PROJECT, 2022
** My Putstr
** File description:
** This function prints the characters of a string one by one.
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
