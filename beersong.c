#include <stdio.h>

//write the song 99 bottles of beer

int result = 99;

void main() {
  
  while (result > 0){
  printf("%d bottles of beer on the wall, %d bottles of beer!\n", result, result);
  result -= 1;
  if (result != 0){printf("Take it down, pass it round, %d bottles of beer on the wall!\n", result);
  } else{
    printf("Take it down, pass it round, no more bottles of beer on the wall!");
  }
}
}
