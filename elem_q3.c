#include <stdio.h>
#include <string.h> 

int main(void) {
    char* s;
    printf("Enter your name (you will be greeted by name only if you are Alice or Bob) : "); 
    scanf("%s", s); 
    if (strcmp("Alice", s) == 0 || strcmp("Bob", s) == 0) {
        printf("Hello, %s!\n", s);     
    }
    else {
        printf("Hello!\n"); 
    }
    return 0; 
}