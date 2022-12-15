/*
** EPITECH PROJECT, 2022
** Swap Endian Color
** File description:
** This function changes the endianness
** of the color and returns it.
*/

int swap_endian_color(int color)
{
    unsigned char r = color >> 24;
    unsigned char g = color >> 16;
    unsigned char b = color >> 8;
    unsigned char a = color;

    int res = (a << 24) + (b << 16) + (g << 8) + r;

    return res;
}
