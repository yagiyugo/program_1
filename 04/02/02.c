#include<stdio.h>

int main(void) {
  int x, y;

  scanf("%d %d",&x, &y);

  if(x==y)
    printf("The two numbers %d and %d are equal.\n", x, y);
  else if(x>y)
    printf("The first number %d is greater than the second number %d.\n", x, y);
  else
    printf("The second number %d is greater than the first number %d.\n", y, x);
  
  return 0;
}
