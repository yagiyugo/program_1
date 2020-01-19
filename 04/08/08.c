#include<stdio.h>

int main(void) {
  int a1, a2, a3, a4, a5, a6, a7, max1, max2;

  scanf("%d %d %d %d %d %d %d",&a1, &a2, &a3, &a4, &a5, &a6, &a7);
  
  if(a1>a2){
    max1 = a1;
    max2 = a2;
  }
  else{
    max1 = a2;
    max2 = a1;
  }

  if(a3 > max1){
    max2 = max1;
    max1 = a3;
  }
  else if(a3 > max2)
    max2 = a3;
  
  if(a4 > max1){
    max2 = max1;
    max1 = a4;
  }
  else if(a4 > max2)
    max2 = a4;

  if(a5 > max1){
    max2 = max1;
    max1 = a5;
  }
  else if(a5 > max2)
    max2 = a5;

  if(a6 > max1){
    max2 = max1;
    max1 = a6;
  }
  else if(a6 > max2)
    max2 = a6;

  if(a7 > max1){
    max2 = max1;
    max1 = a7;
  }
  else if(a7 > max2)
    max2 = a7;

  printf("The largest = %d, the second largest = %d.\n", max1, max2);

  return 0;
}
