void my_putchar(char c) {
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }

    return i;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }

    if (nb > 9) {
        my_put_nbr(nb / 10);
    }

    my_putchar(48 + (nb % 10));
}

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

#include <stdio.h>

int main(void) {
    char arr[] = "Hello this is a test";
    //char test1[] = "a";
    //char test2[] = "a";

    char test3[] = "q";
    char test4[] = "b";

    char test5[] = "abc";
    char test6[] = "abcdefg";
    
    //printf("%d\n", strncmp(test1, test2, 0));
    //printf("%d\n", strncmp(test3, test4, 2));
    //printf("%d\n", strncmp(test6, test5, 7));

    //printf("%d\n", my_strncmp(test1, test2, 0));
    //printf("%d\n", my_strncmp(test3, test4, 2));
    //printf("%d\n", my_strncmp(test6, test5, 7));

    char test[15] = "This is a test";
    char test2[3] = "is";
    
    //printf("%s\n", strstr(test, test2));
    printf("%s", my_strstr(test, test2));
           //printf("%s", my_revstr(strdup("Bonjour je suis un test")));
    
    return(0);
}
