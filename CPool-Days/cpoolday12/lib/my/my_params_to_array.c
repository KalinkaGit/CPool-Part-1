/*
** EPITECH PROJECT, 2022
** My Params To Array
** File description:
** This function stores the program's
** parameters into an array of structures
** and returns the address.
*/

struct info_param {
    int length;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *res;
    int i = 0;

    res = malloc(sizeof(struct info_param) * (ac + 1));
    for (i; i < ac; i++) {
        res[i].length = my_strlen(av[i]);
        res[i].str = av[i] + '\0';
        res[i].copy = my_strdup(av[i]);
        res[i].word_array = my_str_to_word_array(av[i]);
    }

    res[i + 1].str = '0';

    return (res);
}
