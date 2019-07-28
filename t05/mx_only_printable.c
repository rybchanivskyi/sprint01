#include <unistd.h>
#include "mx_printchar.c"

void mx_only_printable(void) {
    for (int i = 177; i >= 32; --i) {
        mx_printchar((char)i);
        write(1, "\n", 1);
    } 
}
