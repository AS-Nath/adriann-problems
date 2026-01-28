// This exercise is a little more advanced. You should know what pointers and 
// dynamic memory allocation are before attempting it. 
#include <stdio.h>
#include <stdlib.h> // for rand() and calloc(). 
#include <stdbool.h>
#include <time.h> // for time(). 

int main(void) {
    // An RNG (Random Number Generator) needs to be seeded.
    // That means providing an initial random number based on which the RNG algorithm can
    // generate a proper random number.
    srand(time(NULL)); 
    // Modulo 100 means the number is restricted to the 0 - 99 domain. Add 1 for 1 - 100.  
    int randint = (rand() % (100)) + 1;
    // We shouldn't count equal guesses twice. To efficiently check if we've already seen
    // a certain value, we'll maintain a boolean array where checked[val - 1] tells us whether
    // the value has been seen or not. 
    bool* checked = (bool *)calloc(100, sizeof(bool)); 
    int guesses = 0; 
    printf("DEBUG LINE : randint == %d\n", randint);
    while (true) {
        printf("Guess : ");
        int guess;
        scanf("%d", &guess);
        if (checked[guess - 1] == false) {
            guesses += 1; 
            checked[guess - 1] = true; 
        }
        if (guess > randint) {
            printf("Too high!\n"); 
        }
        else if (guess < randint) {
            printf("Too low!\n"); 
        }
        else {
            printf("%d was the number!\n", guess); 
            printf("Took %d guesses.\n", guesses); 
            break;
        }
    }
    return 0;
}