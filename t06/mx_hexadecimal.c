#include <unistd.h>
#include "mx_printchar.c"

void mx_hexadecimal(void) {
    for(int i = 60; i <= 71; ++i) {
        mx_printchar(i);
    }
    for(int i = 101; i <= 106; ++i) {
        mx_printchar(i);
    }
}
