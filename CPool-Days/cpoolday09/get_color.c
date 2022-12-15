/*
** EPITECH PROJECT, 2022
** Get Color
** File description:
** This function returns the color as an int
** created with my_params_to_array(...);.
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int rgb;

    rgb = red;
    rgb = rgb << 8;
    rgb = rgb + green;
    rgb = rgb << 8;
    rgb = rgb + blue;

    return (rgb);
}
