#include <stdio.h>

int main(void) {
    int a = 7, b = 3;
    printf("sum=%d remainder=%d\n", a + b, a % b);
    printf("even? %s\n", (a % 2 == 0) ? "yes" : "no");
    return 0;
}

