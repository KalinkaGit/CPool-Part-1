/*
** EPITECH PROJECT, 2022
** My Strcapitalize
** File description:
** This function capitalizes the first letter of each word.
*/

char *my_strcapitalize(char *str)
{
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    
    for (int i = 1; str[i] != '\0'; i++) {
        if ((str[i - 1] >= 23 && str[i - 1] <= 47 || str[i - 1] <= ';')
            && (str[i] <= 122 && str[i] >= 97)
            || (str[i - 1] <= 57 && str[i - 1] >= 48)) {
                str[i] = str[i] - 32;
        }
    }

    return (str);
}


