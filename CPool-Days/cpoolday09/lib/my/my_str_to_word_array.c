/*
** EPITECH PROJECT, 2022
** Concat Params
** File description:
** This function splits a string into words
** separtors are all non-alphanum chars.
** This function returns an array.
*/

int count(char const *str)
{
    int i = 0;
    int k = 0;

    for (; str[i] != '\0'; i++) {
        if (!my_str_isalphanum(str[i])
            && (my_str_isalphanum(str[i - 1])
            || i == 0))
            k++;
    }

    if (my_str_isalphanum(str[i - 1]))
        k++;

    return (k);
}

int wlen(char const *str, int i)
{
    int l = 0;

    for (; my_str_isalphanum(str[i]); i++) {
        l++;
    }

    return (l);
}

void changee(char *tmp, char **dest, int j, int k)
{
    tmp[j] = '\0';
    dest[k] = tmp;
}

char **my_str_to_word_array(char const *str)
{
    char **dest;
    char *tmp;
    int j = 0;
    int k = 0;
    dest = malloc(sizeof(char *) * (my_strlen(str) + 1));
    for (int i = 0; str[i] != '\0' && k < count(str); i++) {
        tmp = malloc(sizeof(char) * (wlen(str, i) + 1));
        for (; my_str_isalphanum(str[i]); j++) {
            tmp[j] = str[i];
            i++;
        }
        if (j > 0) {
            changee(tmp, dest, j, k);
            k++;
        }
        j = 0;
    }
    dest[k] = 0;
    return (dest);
}
