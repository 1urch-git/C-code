#include <stdio.h>
#include <stdlib.h>

int rando = 11;
int guess;
int checker();

void main(){
printf("Random number is %d\n", rando);
printf("Welcome to random guesser! Please guess a random number between 1 and 100...\n\n");
checker();
}

int checker(){
    printf("Enter your guess: \n");
    scanf("%d", &guess);

    if (guess == rando){
        printf("Congratulations! %d was the answer...", rando);
    }
    else{
        printf("Wrong number, guess again!\n");
        checker();
    } 
    return 0;
}

