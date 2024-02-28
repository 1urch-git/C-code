#include <stdio.h>

int main(){
FILE *fptr;

fptr = fopen("poem.txt", "r");
char myString[40];
while(fgets(myString, 40, fptr)){
printf("%s", myString);
}
fclose(fptr);
}