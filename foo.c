#include <stdio.h>  // printf
#include <unistd.h> // open, close, read, write

void foo(int *x) // x=a
{
    x[2] = 99;
    *(x + 2) = 99; // does the same thing
}

int main(void)
{
    int a[] = {1, 2, 3};
    foo(a);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
