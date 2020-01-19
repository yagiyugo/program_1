#include<stdio.h>

int sum_of_first_and_second(int a[]) {
  return a[0] + a[1];
}

int main(void) {
  int b[4] = {10, 20, 30, 40};
  int c;

  c=sum_of_first_and_second(b);
  printf("%d\n", c);

  return 0;
}
