#include "../inc/header.h"
int mx_counter_range(int n) {
    if (n == 0) 
        return 1;
    int res = 0;
    int d = 9;
    for (int i = 0; i < n; i++) {
        res += d;
        d *= 10;
    }
    return res;
}
