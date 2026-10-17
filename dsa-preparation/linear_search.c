#include <stddef.h>

int linear_search(const int *a, size_t n, int target) {
    for (size_t i = 0; i < n; ++i) {
        if (a[i] == target) return (int)i;
    }
    return -1;
}

