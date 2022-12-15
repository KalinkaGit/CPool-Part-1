/*
** EPITECH PROJECT, 2022
** My Strcapitalize
** File description:
** This function capitalizes the first letter of each word.
*/

char *my_strlowcase_a(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90 && str[i] >= 65)
            str[i] = str[i] + 32;
    }

    return (str);
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
    }
}
