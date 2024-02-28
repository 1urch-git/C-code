#include <stdio.h>

void main(){

int leng;
int counter = 0;
FILE *fptr;

fptr = fopen("poem.txt","w");

printf("How many lines do you want your poem to be?\n");
scanf("%d", &leng);
getchar();
printf("Enter a %d line poem.\n", leng);

while(counter < leng){
    //printf("First line");
    char myString[30];
    fgets(myString, sizeof(myString), stdin);
    fprintf(fptr, myString);
    
    counter += 1;
    //printf("last line");
}

fclose(fptr);
}