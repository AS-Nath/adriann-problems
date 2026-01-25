#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number : "); 
    scanf("%d", &n); 
    int sum = 0;
    for (int i = 0; i < n; i++) { 
        if ((i + 1) % 3 == 0 || (i + 1) % 5 == 0) {
            sum += i + 1;
        }
    }
    printf("%d\n", sum); 
    return 0; 
}