#include<stdio.h>

int main(void) {
  int num, div, count=0;

  scanf("%d", &num);
  div = num;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  if(div !=0 && div%2==1)
    count++;
  div /= 2;
  
  printf("The number of ones in %d is %d.\n", num, count);

  return 0;
}
