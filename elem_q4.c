#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number : "); 
    scanf("%d", &n); 
    int sum = 0;
    // A for loop iterates over a series of values.
    // Here, from 0 to n - 1. It doesn't go till n because n < n is false. 
    // Because it starts from 0, we are working on (i + 1) which ranges from 1 to n. 
    // Syntax : for (<initialisation step>; <exit condition>; <step condition>); 
    for (int i = 0; i < n; i++) {
        sum += i + 1; 
    }
    printf("%d\n", sum); 
    return 0; 
}