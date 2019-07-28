#include <unistd.h>
#include "mx_printchar.c"

void mx_print_alphabet(void) {
    for (int i = 65; i <= 90; ++i) {
        if (i % 2 == 1) {  
            mx_printchar((char)i);
        }
        else {
            mx_printchar((char)(i + 32));
        }
    }
    write(1, "\n", 1);
}


