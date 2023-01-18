#include <stdio.h>  // printf
#include <unistd.h> // open, close, read, write

int main(void)
{
    char c = 'B'; // character
    char *p;      // character pointer

    p = &c; // & address-of operator
            // this crates a pointer to a char

    printf("%c\n", c);
    printf("%s\n", p); // this displays weird because there's no null termination

    // printf example, substituting
    // printf("%c %d %s", 'c', 123, "hi there!");

    // dereference a pointer with a deref operator
    printf("%c\n", *p);
}