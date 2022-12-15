/*
** EPITECH PROJECT, 2022
** Concat Params
** File description:
** This function turns the command-line given
** arguments into a single string.
** Arguments are separated by '\n'.
*/

char *concat_params(int argc, char **argv)
{
    char *str;
    int total = 0;

    for (int i = 0; i < argc; i++) {
        total += my_strlen(argv[i]) + 1;
    }

    str = malloc(sizeof(char) * (total + 1));

    for (int i = 0; i < argc; i++) {
        my_strcat(my_strcat(str, argv[i]), "\n");
    }

    str[total - 1] = '\0';
    return (str);
}
