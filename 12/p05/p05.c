#include<stdio.h>

void twice(int a[], int n) {
  int i;

  for(i=0; i<n; i++){
    a[i]*=2;
  }
}

int main(void) {
  int b[] = {10, 20, 30, 40, 5, 20, 10, 8};
  int i;
  
  twice(b, 8);
  for(i=0; i<8; i++){
    printf("%d ", b[i]);
  }
  
  return 0;
}
