#include <stdio.h>
#include <stdbool.h> // Without this you can't use true or false. 
#include <limits.h> // To identify the maximum unsigned long long integer. 

// We're working in long long integers because it allows us to represent the largest
// integers easily representable (as per the question) since C does not support arbitrary
// integer sizes. 
// We're also making them unsigned to further extend the positive range. 

bool prime(unsigned long long int n) {
    for (unsigned long long int i = 2; i < n / 2; i++) {
        // Start from 2, the smallest prime. 
        // It can be proven that the smallest non-1 factor of a composite number is less than its
        // square root. For safety though, we're using n / 2. 
        // We iterate over all the values in the 2 to n / 2 range to verify divisibility.
        if (n % i == 0) {
            return false;
        }
    }
    return true; 
}

int main(void) {
    for (unsigned long long int i = 2; i <= ULLONG_MAX; i++) {
        if (prime(i)) {
            printf("%lld\n", i); 
        }
    }
    return 0; 
}