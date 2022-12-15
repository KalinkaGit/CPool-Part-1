/*
** EPITECH PROJECT, 2022
** My Revstr
** File description:
** This function reverses a string.
*/

char *my_revstr(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count += 1;
    }

    char newstr[count];

    for (int i = 0; str[i] != '\0'; i++) {
        newstr[i] = str[i];
    }

    for (int i = 0; i <= count; i++) {
        str[count - i - 1] = newstr[i];
    }

    return (str);
}
