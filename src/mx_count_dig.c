#include "../inc/header.h"

int mx_count_dig(int n) {
    int digits = 0; 
    while (n >= 10) {
        n = (n % 10) / 10;
        digits++; 
    }
    return digits + 1;
}
