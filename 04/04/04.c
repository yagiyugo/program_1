#include<stdio.h>

int main(void) {
  int a1, a2, a3, a4, a5, a6, a7, max;

  scanf("%d %d %d %d %d %d %d",&a1, &a2, &a3, &a4, &a5, &a6, &a7);
  
  max = a1;
  if(a2 > max) max=a2;
  if(a3 > max) max=a3;
  if(a4 > max) max=a4;
  if(a5 > max) max=a5;
  if(a6 > max) max=a6;
  if(a7 > max) max=a7;

  printf("The largest = %d.\n", max);

  return 0;
}
