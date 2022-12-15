/*
** EPITECH PROJECT, 2022
** My Evil Str
** File description:
** This function swaps each characters of a string, two by two.
*/

char my_evil_str(char *str)
{
    int stringlen = my_strlen(str);
    char newstr[stringlen];

    for (int i = 0; i <= stringlen / 2; i++) {
        char tmp = str[stringlen - i - 1];

        newstr[stringlen - i - 1] = str[i];
        newstr[i] = tmp;
    }

    return (newstr);
}
