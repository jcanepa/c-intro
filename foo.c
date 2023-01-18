#include <stdio.h>  // printf
#include <unistd.h> // open, close, read, write

int main(void)
{
    char *buf = "Hello, world!\n";
    write(1, buf, 14);

    // first argument is file descriptor:
    // 3 are available out of the box:
    // 0 - standard input
    // 1 - standard output (screen)
    // 2 - error
}