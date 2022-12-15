/*
** EPITECH PROJECT, 2022
** cat
** File description:
** cat
*/

#include <fcntl.h>
#include <errno.h>

int main(int ac, char **av)
{
    if (ac == 1)
        return(0);
    for (int i = 1; i < ac; i++) {
        int fd = open(av[i], O_RDONLY);
        char buff[31];
        if (fd == -1) {
            my_putstr("Error with open\n");
            return (1);
        }
        int size = read(fd, buff, 30);
        my_putstr(buff);
    }
}
