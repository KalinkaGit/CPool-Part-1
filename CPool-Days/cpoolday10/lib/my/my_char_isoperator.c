/*
** EPITECH PROJECT, 2022
** My Char IsOperator
** File description:
** Check if the given char is an math operator.
*/

char my_char_isoperator(char c)
{
    if (c == 37 || c == 42
    || c == 43 || c == 45
    || c == 47)
        return (1);

    return (0);
}
