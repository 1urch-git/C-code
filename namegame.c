#include <stdio.h>

int main(){
char first_name[10];
char last_name[10];
char address[25];

fflush(stdin);

//use this one for long strings with whitespace
//fgets(fullName, sizeof(fullName), stdin);
printf("What is your address?\n");
fgets(address, sizeof(address), stdin);

//use this one for single words, whitespace terminates
//scanf("%s", &fullName);
printf("What is your first name?\n");
scanf("%s", first_name);
printf("What is your last name?\n");
scanf("%s", last_name);

//Print the data
printf("Your first name: %s\n", first_name);
printf("Your last name: %s\n", last_name);
printf("Your address: %s\n", address);
}