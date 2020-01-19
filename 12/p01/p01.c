#include<stdio.h>

void clear_first(int a[]) {
  a[0] = 0;
}

int main(void) {
  int b[4] = {10, 20, 30, 40};

  clear_first(b);
  printf("%d\n",b[0]);

  return 0;
}
