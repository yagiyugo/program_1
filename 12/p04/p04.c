#include<stdio.h>

int sum(int a[], int n) {
  int i, sum=0;

  for(i=0; i<n; i++){
    sum += a[i];
  }

  return sum;
}

int main(void) {
  int b[] = {10, 20, 30, 40, 5, 20, 10, 8};
  int c;

  c = sum(b, 3);
  printf("%d\n", c);
  
  return 0;
}
