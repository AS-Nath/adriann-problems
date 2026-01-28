#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number : "); 
    scanf("%d", &n); 
    for (int i = 0; i < 12; i++) {
        // We iterate over 0 to 11. There are 12 numbers in the range.
        // Since a multiplication table goes from 1 to 12, we take i + 1 and not i. 
        printf("%d x %d = %d\n", n, i + 1, n * (i + 1)); 
    }
    return 0;
}