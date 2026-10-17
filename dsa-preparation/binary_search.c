#include <stddef.h>

int binary_search(const int *a, size_t n, int target) {
    size_t lo = 0, hi = n;
    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        if (a[mid] == target) return (int)mid;
        if (a[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return -1;
}

