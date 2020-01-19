#include<stdio.h>

int main(void) {
  int a1, a2, a3, a4, a5, a6, a7, count7=0, count13=0;

  scanf("%d %d %d %d %d %d %d",&a1, &a2, &a3, &a4, &a5, &a6, &a7);
  
  if(a1%7==0) count7++;
  if(a2%7==0) count7++;
  if(a3%7==0) count7++;
  if(a4%7==0) count7++;
  if(a5%7==0) count7++;
  if(a6%7==0) count7++;
  if(a7%7==0) count7++;

  if(a1%13==0) count13++;
  if(a2%13==0) count13++;
  if(a3%13==0) count13++;
  if(a4%13==0) count13++;
  if(a5%13==0) count13++;
  if(a6%13==0) count13++;
  if(a7%13==0) count13++;


  printf("multiples of 7:  %d\n", count7);
  printf("multiples of 13:  %d\n", count13);

  return 0;
}
