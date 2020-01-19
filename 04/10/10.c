#include<stdio.h>

int main(void) {
  int n1, n2, n3, x1, x2, x3, c11, c12, c21, c22, c31, c32;

  scanf("%d %d %d", &n1, &n2, &n3);
  
  if(n1==0){ x1=2;  c11='A'; c12='A';}
  if(n1==1){ x1=6;  c11='A'; c12='B';}
  if(n1==2){ x1=10; c11='A'; c12='O';}
  if(n1==3){ x1=3;  c11='B'; c12='B';}
  if(n1==4){ x1=15; c11='B'; c12='O';}
  if(n1==5){ x1=5;  c11='O'; c12='O';}

  if(n2==0){ x2=2;  c21='A'; c22='A';}
  if(n2==1){ x2=6;  c21='A'; c22='B';}
  if(n2==2){ x2=10; c21='A'; c22='O';}
  if(n2==3){ x2=3;  c21='B'; c22='B';}
  if(n2==4){ x2=15; c21='B'; c22='O';}
  if(n2==5){ x2=5;  c21='O'; c22='O';}

  if(n3==0){ x3=4;  c31='A'; c32='A';}
  if(n3==1){ x3=6;  c31='A'; c32='B';}
  if(n3==2){ x3=10; c31='A'; c32='O';}
  if(n3==3){ x3=9;  c31='B'; c32='B';}
  if(n3==4){ x3=15; c31='B'; c32='O';}
  if(n3==5){ x3=25; c31='O'; c32='O';}
  
  if((x1*x2)%x3==0)
    printf("Possible: ");
  else
    printf("Impossible: ");

  printf("father %c%c, mother %c%c, child %c%c\n", c11, c12, c21, c22, c31, c32);

  return 0;
}
