#include <stdio.h>
#include <string.h>

int main(void) {
    char name[32];
    printf("Name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    name[strcspn(name, "\n")] = '\0';
    printf("Hello, %s! Length=%zu\n", name, strlen(name));
    return 0;
}

