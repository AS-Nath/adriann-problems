#include <stdio.h>
#include <stdbool.h>

bool leap(int n) {
    // if the year isn't divisible by 4, it's not a leap year. 
    if (n % 4 == 0) {
        // if it is also divisible by 100, it must also be divisible by 400 to be a leap year.
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
    // Loop indefinitely until we have counted 20 leap years. 
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