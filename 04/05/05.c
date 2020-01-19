#include<stdio.h>

int main(void) {
  int a1, a2, a3, a4, a5, a6, a7, count=0;

  scanf("%d %d %d %d %d %d %d",&a1, &a2, &a3, &a4, &a5, &a6, &a7);
  
  if(a1%2==0) count++;
  if(a2%2==0) count++;
  if(a3%2==0) count++;
  if(a4%2==0) count++;
  if(a5%2==0) count++;
  if(a6%2==0) count++;
  if(a7%2==0) count++;

  printf("The number of even numbers = %d.\n", count);

  return 0;
}
