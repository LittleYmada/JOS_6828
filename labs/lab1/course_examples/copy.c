#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main() {
    // read(0x0, "123\n\0", 0x80);
    write(0x1, "123\n\0", 0x4);
    return 0;
}