#include <stdio.h>
#include <stdbool.h>

bool leap(int n) {
    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0) {
                return true;
            }
            else {
                return false; 
            }
        }
        else {
            return true; 
        }
    }
    return false; 
}

int main(void) {
    int year = 2026;
    int n = 0; 
    while (true) {
        if (leap(year)) {
            printf("%d\n", year); 
            n += 1;
        }
        if (n >= 20) {
            break;
        }
        year += 1;
    }
    return 0; 
}