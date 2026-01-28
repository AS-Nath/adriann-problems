#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number : "); 
    scanf("%d", &n); 
    for (int i = 0; i < 12; i++) {
        printf("%d x %d = %d\n", n, i + 1, n * (i + 1)); 
    }
    return 0;
}