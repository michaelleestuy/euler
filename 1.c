#include <stdio.h>

int main(){
  int count = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      count += i;
    }
  }

  printf("%d\n", count);
  return 0;
}
