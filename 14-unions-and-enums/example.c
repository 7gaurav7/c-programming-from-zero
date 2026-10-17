#include <stdio.h>

enum Status { STATUS_OK, STATUS_ERROR };

int main(void) {
    enum Status status = STATUS_OK;
    printf("status=%d\n", status);
    return 0;
}

