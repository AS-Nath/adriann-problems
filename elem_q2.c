#include <stdio.h>

int main(void) {
    char* s;
    printf("What's your name?\n");
    scanf("%s", s); 
    printf("Hello, %s!\n", s); 
    return 0; 
}