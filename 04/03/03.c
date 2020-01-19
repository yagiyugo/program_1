#include<stdio.h>

int main(void) {
  int x ,y ,z, max;

  scanf("%d %d %d", &x, &y, &z);
  
  if(x>y){
    if(x>z)
      max=x;
    else
      max=z;
  }
  else{
    if(y>z)
      max=y;
    else
      max=z;
  }

  printf("The largest = %d.\n",max);

  return 0;
}
