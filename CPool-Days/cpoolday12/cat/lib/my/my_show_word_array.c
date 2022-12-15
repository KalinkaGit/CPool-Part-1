/*
** EPITECH PROJECT, 2022
** Concat Params
** File description:
** This function turns the command-line given
** arguments into a single string.
** Arguments are separated by '\n'.
*/

int my_show_word_array(char * const *tab)
{
    char *str;
    int total = 0;

    for (int i = 0; tab[i] != 0; i++) {
        total += my_strlen(tab[i]) + 1;
    }

    str = malloc(sizeof(char) * (total + 1));

    for (int i = 0; tab[i] != 0; i++) {
        my_strcat(my_strcat(str, tab[i]), "\n");
    }

    my_putstr(str);
}
