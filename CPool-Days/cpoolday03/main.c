void my_putchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    my_put_nbr(-2147483648);
    return(0);
}
