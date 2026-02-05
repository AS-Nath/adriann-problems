#include <stdio.h>
#include <math.h> 

int main(void) {
    int sign = 1; 
    float sum = 0.0;
    int denom = 1; 
    // This is a power series for pi. The result should be 3.14 something. 
    for (int i = 1; i <= 1000000; i++) {
        sum += pow(-1, i+1) / (2*i - 1);
    }
    printf("%f\n", sum * 4); 
    return 0;
}