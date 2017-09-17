#include <stdio.h>

int main(){
  printf("Problem one: %d\n", problemone);

  return 0;
}

int problemone(){
  int sum = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i%3 == 0 || i%5 == 0)
      sum += i;
  }
  return sum; 
}


int problemtwo(){
  int first = 1;
  int second = 1;
  int sum = 0;

  int temp = 0;

  while(second < 4000000){
    if(second%2 == 0){
      sum += second;
    }
    temp = first + second;
    first = second;
    second = temp;
  }

  return sum;
}
