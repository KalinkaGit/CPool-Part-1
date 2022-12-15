/*
** EPITECH PROJECT, 2022
** My StrStr
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    if (str[i] == '\0' && to_find[j] == '\0')
        return (str);
    while (str[i] != '\0') {
        while (str[i + j] == to_find[j]
            && str[i + j] != '\0') {
            j++;
        }
        if (to_find[j] == '\0')
            return (str + i);
        i++;
        j = 0;
    }

    return (0);
}
