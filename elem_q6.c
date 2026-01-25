#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number : "); 
    scanf("%d", &n); 
    printf("Enter 1 if you wish to compute a sum.\n"); 
    printf("Enter 2 if you wish to compute a product.\n"); 
    int c;
    scanf("%d", &c); 
    switch (c) {
        case 1 : 
            int s = 0;
            for (int i = 0; i < n; i++) {
                s += i + 1; 
            }
            printf("Sum == %d\n", s); 
            break;
        case 2 : 
            int p = 1;
            for (int i = 0; i < n; i++) {
                p *= (i + 1); 
            }
            printf("Product == %d\n", p); 
            break; 
        default : 
        printf("Invalid input.\n"); 
    }
    return 0; 
}