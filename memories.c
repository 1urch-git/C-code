#include <stdio.h>

int main(){
int integer = 11;
int* ptr = &integer;

printf("%d\n", integer);
printf("%p\n", &ptr);

int myArray[4] = {25, 50, 75, 100};
printf("%d\n", myArray[0]);
printf("%p\n", &myArray[0]);

int i;

for (i = 0; i < 4; i++) {
  printf("%p\n", &myArray[i]);
}

return 0;
}