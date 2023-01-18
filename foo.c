#include <stdio.h>  // printf
#include <unistd.h> // open, close, read, write

int addOne(int *x) // x = b
{
    *x = *x + 1;
}

int main(void)
{
    int b = 12;
    addOne(&b);
    printf("%d\n", b);
}