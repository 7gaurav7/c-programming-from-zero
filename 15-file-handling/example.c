#include <stdio.h>

int main(void) {
    FILE *fp = fopen("example.txt", "w");
    if (fp == NULL) { perror("example.txt"); return 1; }
    fprintf(fp, "C file handling\n");
    if (fclose(fp) != 0) { perror("fclose"); return 1; }
    return 0;
}

