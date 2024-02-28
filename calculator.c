#include <stdio.h>

int addition(int x, int y){
return x+y;
}

int subtract(int x, int y){
return x-y;
}

int multiply(int x, int y){
return x*y;
}

int main(int z){
printf("Enter a number for the operation:\n");
printf("1- Addition\n");
printf("2- Subtraction\n");
printf("3- Multiplication\n");
scanf("%d", &z);
int x;
int y;
printf("Enter the first number: \n");
scanf("%d", &x);
printf("Enter the second number: \n");
scanf("%d", &y);

if (z == 1){
int sum;
sum = addition(x,y);
printf("Your sum is: %d", sum);
}
else if (z == 2){
int diff;
diff = subtract(x,y);
printf("Your difference is: %d", diff);
}
else if (z == 3){
int prod;
prod = multiply(x,y);
printf("Your product is: %d", prod);
}
else {
    printf("You did not enter a valid choice");
}


}