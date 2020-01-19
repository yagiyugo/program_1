#include<stdio.h>

int sum_of_first5(int a[]) {
  int i, sum=0;

  for(i=0; i<5; i++){
    sum+=a[i];
  }

  return sum;
}

int main(void) {
  int b[] = {10, 20, 30, 40, 5, 20, 10, 8};
  int c;
  
  c = sum_of_first5(b);
  printf("%d\n", c);

  return 0;
}
