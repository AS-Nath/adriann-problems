#include <stdio.h>

int main(void) {
    // This is called a 'pointer string'. The use of '*' indicates that it stores a memory address
    // and not a value. In this case, s stores the memory address of the start of the string (the text) input. 
    char* s;
    printf("What's your name?\n");
    // scanf() is used for input. %s indicates string input. 
    scanf("%s", s); 
    printf("Hello, %s!\n", s); 
    return 0; 
}