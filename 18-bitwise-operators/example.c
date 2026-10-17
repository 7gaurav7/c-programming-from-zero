#include <stdio.h>

int main(void) {
    unsigned flags = 0u;
    const unsigned READ = 1u << 0;
    const unsigned WRITE = 1u << 1;
    flags |= READ;
    flags |= WRITE;
    printf("read=%s write=%s\n", (flags & READ) ? "on" : "off", (flags & WRITE) ? "on" : "off");
    return 0;
}

